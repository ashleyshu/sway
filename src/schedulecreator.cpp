#include <QMessageBox>
#include <QFileDialog>
#include "schedulecreator.h"
#include "mainwindow.h"


//!  Schedule Creator Class
/*!
    \Author: Group 33
    Description: Schedule creator which generates a schedule from the inputs provided by user.
*/


ScheduleCreator::ScheduleCreator(InputController *controller, QObject *parent) :
    QObject(parent)
{
    m_controller = controller;
}

//!  Create schedule functions
/*!
    \Author: Group 33
    Description: Creates schedule from current inputs
*/
ScheduleCreator::ScheduledTasks ScheduleCreator::createSchedule()
{
    ScheduleCreator::ScheduledTasks *result = new ScheduleCreator::ScheduledTasks;

    /* Algorithm -
     * Create timeblocks using constraints, start time, and end time
     * For each timeblock fill in tasks in order of due date
    */

    InputController::TaskEntries tasks = m_controller->getTasks();
    InputController::ConstraintEntries constraints = m_controller->getConstraints();

    // Sort tasks by due date asc then by min required desc
    std::sort(tasks.begin(), tasks.end(),
              [](const TaskEntry *taskEntry1, const TaskEntry *taskEntry2)
            {
                if (taskEntry1->getTask_dueDate() == taskEntry2->getTask_dueDate()) {
                    return taskEntry1->getTask_minRequired() > taskEntry2->getTask_minRequired();
                }
                else {
                    return taskEntry1->getTask_dueDate() < taskEntry2->getTask_dueDate();
                }
            });

    QDateTime start = QDateTime::currentDateTime();

    // Sets start time to minimum of currenttime and earliest task start time to account for people generating schedule late
    if (!tasks.isEmpty() && start > tasks[0]->getTask_dueDate().addSecs(-60)) {
        start = tasks[0]->getTask_dueDate().addSecs(-60);
    }

    QDateTime end = start.addYears(100);

    // Sort constraints by start date
    std::sort(constraints.begin(), constraints.end(),
              [](const ConstraintEntry *constraintEntry1, const ConstraintEntry *constraintEntry2)
            {
                return constraintEntry1->getStartDate() < constraintEntry2->getStartDate();
            });

    QVector<ScheduleCreator::ConstraintInterval*> mergedConstraints = mergeConstraints(constraints);
    QVector<ScheduleCreator::OpenTimeBlock*> openTimeBlocks = createBlocks(mergedConstraints, start, end);

    InputController::TaskEntries currTasks = InputController::TaskEntries();

    for (auto task : tasks) {
        currTasks.append(task);
    }

    // Iterate through created timeblocks and fill in tasks
    for (auto timeblock : openTimeBlocks) {
        QDateTime currTime = timeblock->start;
        InputController::TaskEntries nextTasks = InputController::TaskEntries();

        for (auto task : currTasks) {
            QDateTime taskEndTime = currTime.addSecs(task->getTask_minRequired()*60);
            if (taskEndTime <= timeblock->end) {
                ScheduledTask *newTask = new ScheduledTask(task->getTask_name(), currTime, taskEndTime);
                currTime = currTime.addSecs(task->getTask_minRequired()*60);
                result->append(newTask);
            } else {
                nextTasks.append(task);
            }
        }
        currTasks = nextTasks;
        if (currTasks.isEmpty()) {
            break;
        }
    }

    if (!currTasks.isEmpty()) {
        QMessageBox::information(0, "Can't create valid schedule.",
                                 "This is most likely because there is no way to create a schedule with respect to the tasks, constraints, and starting date.");
    } else {
        ScheduleCreator::saveScheduleToCSV(*result);
    }

    return *result;
}

//!  Save Schedule
/*!
    \Author: Group 33
    Description: Saves schedule to a csv
    @param schedule the scheduled tasks
*/
void ScheduleCreator::saveScheduleToCSV(ScheduleCreator::ScheduledTasks schedule) {
    QString fileName = QFileDialog::getSaveFileName(0, "Save Schedule", "", "Comma-Seperated Files (*.csv)");
    if (fileName.isEmpty()) {
        return;
    }
    else {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly|QFile::Truncate)) {
            QMessageBox::information(0, tr("Unable to open file"),
                file.errorString());
            return;
        }
        QTextStream out(&file);
        QString dateTimeFormat = "yyyy-MM-ddThh:mm:ss-05:00";

        out << "Subject,Start DateTime,End DateTime" << endl;
        for (ScheduledTask *task : schedule) {
            out << task->name() << ",";
            out << task->startTime().toString(dateTimeFormat) << ",";
            out << task->endTime().toString(dateTimeFormat) << endl;
        }
        file.flush();
        file.close();
      }
}

//!  Merge Constraints
/*!
    \Author: Group 33
    Description: Helper function to merge inputted constraint
    @param sortedConstraints the inputted constraints after sort
*/
QVector<ScheduleCreator::ConstraintInterval*> ScheduleCreator::mergeConstraints(InputController::ConstraintEntries sortedConstraints) {

    QVector<ScheduleCreator::ConstraintInterval*> mergedConstraints = QVector<ScheduleCreator::ConstraintInterval*>();

    if (sortedConstraints.isEmpty()) {
        return mergedConstraints;
    }

    QDateTime currMergeStart = sortedConstraints[0]->getStartDate();
    QDateTime currMergeEnd = sortedConstraints[0]->getEndDate();

    // Typical interval merge algo
    for (int i = 1; i < sortedConstraints.length(); i++) {
        ConstraintEntry *sortedConstraint = sortedConstraints[i];
        if (sortedConstraint->getStartDate() > currMergeEnd) {

            ConstraintInterval *newInterval = new ConstraintInterval();
            newInterval->start = currMergeStart;
            newInterval->end = currMergeEnd;
            mergedConstraints.append(newInterval);
            currMergeStart = sortedConstraint->getStartDate();
            currMergeEnd = sortedConstraint->getEndDate();
        }
        else if (sortedConstraint->getEndDate() >= currMergeEnd) {
            currMergeEnd = sortedConstraint->getEndDate();
        }
    }
    ConstraintInterval *newInterval = new ConstraintInterval();
    newInterval->start = currMergeStart;
    newInterval->end = currMergeEnd;
    mergedConstraints.append(newInterval);

    return mergedConstraints;
}

//!  Create blocks function
/*!
    \Author: Group 33
    Description: Creates blocks of time which will used by tasks
    @param mergedConstraints constraints list after overlapping constraints have been merged
    @param start start time for schedule
    @param end end time for schedule
*/
QVector<ScheduleCreator::OpenTimeBlock*> ScheduleCreator::createBlocks(QVector<ConstraintInterval*> mergedConstraints, QDateTime start, QDateTime end) {

    QVector<ScheduleCreator::OpenTimeBlock*> timeblocks = QVector<ScheduleCreator::OpenTimeBlock*>();

    int constraintIdx = 0;

    while (mergedConstraints.size() > constraintIdx && mergedConstraints[constraintIdx]->end < start) {
        constraintIdx++;
    }

    if (mergedConstraints.size() <= constraintIdx || mergedConstraints[constraintIdx]->start >= end) {
        OpenTimeBlock *timeblock = new OpenTimeBlock();
        timeblock->start = start;
        timeblock->end = end;
        timeblocks.append(timeblock);
        return timeblocks;
    }

    if (mergedConstraints[constraintIdx]->start > start) {
        OpenTimeBlock *timeblock = new OpenTimeBlock();
        timeblock->start = start;
        timeblock->end = mergedConstraints[constraintIdx]->start;
        timeblocks.append(timeblock);
    }

    while (constraintIdx < mergedConstraints.size() && mergedConstraints[constraintIdx]->end < end) {
        OpenTimeBlock *timeblock = new OpenTimeBlock();
        timeblock->start = mergedConstraints[constraintIdx]->end;
        constraintIdx++;
        if (constraintIdx < mergedConstraints.size() && mergedConstraints[constraintIdx]->start < end) {
            timeblock->end = mergedConstraints[constraintIdx]->start;
        } else {
            timeblock->end = end; // if here, loop should stop
        }
        timeblocks.append(timeblock);
    }

    return timeblocks;
}























