#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>
#include "inputcontroller.h"

//!  Input Controller Class
/*!
    \Author: Group 33
    Description: Class to control the add and remove inputs (tasks and constraints) given by the user
*/

//!  Constructor
InputController::InputController(QObject *parent) : QObject(parent)
{

}

InputController:: ~InputController(){

}

//!  Add Task
/*!
    \Author: Group 33
    Description: Adds task to list
    @param name name of task
    @param dueDate due date of task
    @param minRequired minutes required for the task
*/
TaskEntry* InputController::addTask(QString name, QDateTime dueDate, qint16 minRequired)
{
    auto result = new TaskEntry(name, dueDate, minRequired);
    m_taskEntries.append(result);
    return result;
}

//!  Remove Task
/*!
    \Author: Group 33
    Description: Removes task from list
    @param idx index to remove
*/
void InputController::removeTask(int idx)
{
    if (idx < m_taskEntries.length()) {
        TaskEntry* task = m_taskEntries.at(idx);
        m_taskEntries.removeOne(task);
    }
}

//!  Add Constraint
/*!
    \Author: Group 33
    Description: Adds constraint to list
    @param name name of constraint
    @param dueDate due date of constraint
    @param minRequired minutes required for the constraint
*/
ConstraintEntry* InputController::addConstraint(QString name, QDateTime startDate, qint16 minRequired)
{
    auto result = new ConstraintEntry(name, startDate, minRequired);
     m_constraintEntries.append(result);
    return result;
}

//!  Remove Constraint
/*!
    \Author: Group 33
    Description: Removes constraint from list
    @param idx index to remove
*/
void InputController::removeConstraint(int idx)
{
    if (idx < m_constraintEntries.length()) {
        ConstraintEntry* constraint = m_constraintEntries.at(idx);
        m_constraintEntries.removeOne(constraint);
    }
}

//!  Print Tasks to Console
/*!
    \Author: Group 33
    Description: Prints the tasks to console
*/
void InputController::printTasksToConsole(){
    QTextStream out(stdout);
    for (TaskEntry* task : m_taskEntries) {
        qDebug() << task->getTask_name() << " -- " << task->getTask_dueDate() << " -- " << task->getTask_minRequired();
    }
}

//!  Get Tasks
InputController::TaskEntries InputController::getTasks()
{
    return m_taskEntries;
}

//!  Get Constraints
InputController::ConstraintEntries InputController::getConstraints()
{
    return m_constraintEntries;
}

//!  Save Inputs
/*!
    \Author: Group 33
    Description: Saves inputs to .sway file which can be loaded
*/
void InputController::saveInputs()
{

    QString fileName = QFileDialog::getSaveFileName(0, "Save Inputs", "", "Sway Inputs (*.sway)");
    if (fileName.isEmpty()) {
        QMessageBox::information(0, "Error",
                                 "File name is empty! Please try again and specify a file name.");
        return;
    }
    else {
        QFile file(fileName);
        if (!file.open(QIODevice::WriteOnly|QFile::Truncate)) {
            QMessageBox::information(0, "Unable to open file",
                file.errorString());
            return;
        }

        QTextStream out(&file);

        for (TaskEntry* task : m_taskEntries) {
            QString taskLine = task->getTask_name() + "," + task->getTask_dueDate().toString("h:mm ap' 'MMMM d' 'yyyy") + "," + QString::number(task->getTask_minRequired());
            out << taskLine << endl;
        }

        out << "1CONSTRAINTS1" << endl;

        for (ConstraintEntry* constraint : m_constraintEntries) {
            QString constraintLine = constraint->getName() + "," + constraint->getStartDate().toString("h:mm ap' 'MMMM d' 'yyyy") + "," + QString::number(constraint->getMinRequired());
            out << constraintLine << endl;
        }

        file.flush();
        file.close();
      }

}


//!  Load Inputs
/*!
    \Author: Group 33
    Description: Loads inputs from a file
*/
void InputController::loadInputs()
{
    m_taskEntries.clear();
    m_constraintEntries.clear();
    QString fileName = QFileDialog::getOpenFileName(0, "Load Inputs", "", "Sway Inputs (*.sway)");
    if (fileName.isEmpty()) {
        QMessageBox::information(0, "Error",
                                 "File name is empty! Please try again and specify a file name.");
        return;
    }

    else {
        QFile file(fileName);
        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::information(0, "Unable to open file",
                file.errorString());
            return;
        }
        QTextStream in(&file);
        bool tasksProcessed = false;
        while(!in.atEnd()) {
            QString line = in.readLine();
            if (line=="1CONSTRAINTS1") {
                tasksProcessed = true;
            }
            else if (!tasksProcessed) {
                addTask(line.split(',')[0],
                        QDateTime::fromString(line.split(',')[1], "h:mm ap' 'MMMM d' 'yyyy"),
                        line.split(',')[2].toInt());
            }
            else if (tasksProcessed) {
                addConstraint(line.split(',')[0],
                        QDateTime::fromString(line.split(',')[1], "h:mm ap' 'MMMM d' 'yyyy"),
                        line.split(',')[2].toInt());
            }
        }
        file.close();
      }
}

