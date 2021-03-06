#include <QDebug>
#include "taskentry.h"

//!  Task Entry Class
/*!
    \Author: Group 33
    Description: An inputted task which needs to be scheduled by the program
*/


TaskEntry::TaskEntry(QObject *parent) : QObject(parent)
{

}

//!Constructor with different parameters to initialize task entry
TaskEntry::TaskEntry(QString pName, QDateTime pDueDate, qint16 pMinRequired, QObject *parent) : QObject(parent)
{
    task_name = pName;
    task_dueDate = pDueDate;
    task_minRequired = pMinRequired;
}

//! Deconstructor default
TaskEntry:: ~TaskEntry()
{

}

//! Getter method that returns the task name
QString TaskEntry::getTask_name() const
{
    return task_name;
}

//! Setter method that sets a new task name from the parameter
void TaskEntry::setTask_name(const QString &value)
{
    if (task_name!= value){
        task_name = value;
        emit nameChanged();
    }
}

//! Getter method that returns the task due date
QDateTime TaskEntry::getTask_dueDate() const
{
    return task_dueDate;
}

//! Setter method that sets a new task due date from the parameter
void TaskEntry::setTask_dueDate(const QDateTime &value)
{
    if(task_dueDate != value){
        task_dueDate = value;
        emit dueDateChanged();	 	// this ensures that it communicates with our signals
    }
}

//! Getter method that returns the task minutes requirement
qint16 TaskEntry::getTask_minRequired() const
{
    return task_minRequired;
}

//!Setter method that sets a new task minute requirement from the parameter
void TaskEntry::setTask_minRequired(const qint16 &value)
{
    if(task_minRequired != value){
        task_minRequired = value;
        emit minRequiredChanged();		// this ensures that it communicates with our signals
    }
}
