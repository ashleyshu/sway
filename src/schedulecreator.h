#ifndef SCHEDULECREATOR_H
#define SCHEDULECREATOR_H

#include <QObject>
#include "scheduledtask.h"
#include "mainwindow.h"

/*!
Authors: Group 33
Description: Header for schedule creator which generates a schedule from the inputs provided by user.
Date: November 11, 2020 (WIP)
*/

class ScheduleCreator : public QObject
{
    Q_OBJECT
public:

    explicit ScheduleCreator(InputController *controller, QObject *parent = nullptr);

    typedef QList<ScheduledTask*> ScheduledTasks;

    ScheduledTasks createSchedule();

    struct ConstraintInterval {
        QDateTime start;
        QDateTime end;
    };

    struct OpenTimeBlock {
        QDateTime start;
        QDateTime end;
    };

    QVector<ConstraintInterval*> mergeConstraints(InputController::ConstraintEntries sortedConstraints);
    QVector<ScheduleCreator::OpenTimeBlock*> createBlocks(QVector<ConstraintInterval*> mergedConstraints, QDateTime start, QDateTime end);

    void saveScheduleToCSV(ScheduledTasks schedule);

private:
    InputController *m_controller;

signals:

};


#endif // SCHEDULECREATOR_H

