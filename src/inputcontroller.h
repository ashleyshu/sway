#ifndef INPUTCONTROLLER_H
#define INPUTCONTROLLER_H

#include <QObject>
#include "taskentry.h"
#include "constraintentry.h"

/*!
Authors: Group 33
Description: Header for controller that modifies and gives access to inputs.
Date: November 11, 2020 (WIP)
*/

class InputController : public QObject
{
    Q_OBJECT
public:
    typedef QList<TaskEntry*> TaskEntries;
    typedef QList<ConstraintEntry*> ConstraintEntries;
    explicit InputController(QObject *parent = nullptr);

    ~InputController();

    TaskEntry* addTask(QString name, QDateTime dueDate, qint16 minRequired);
    void removeTask(int idx);
    ConstraintEntry* addConstraint(QString name, QDateTime startDate, qint16 minRequired);
    void removeConstraint(int idx);

    TaskEntries getTasks();
    ConstraintEntries getConstraints();

    void saveInputs();
    void loadInputs();
    void printTasksToConsole();

private:
    TaskEntries m_taskEntries;
    ConstraintEntries m_constraintEntries;


signals:

};

#endif // INPUTCONTROLLER_H
