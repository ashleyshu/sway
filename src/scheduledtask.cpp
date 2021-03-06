#include "scheduledtask.h"

//!  Scheduled Task Class
/*!
    \Authors: Group 33
    Description: Represents one task that has been scheduled by the program
*/

ScheduledTask::ScheduledTask(QString name, QDateTime startTime, QDateTime endTime, QObject *parent) : QObject(parent)
{
    m_name = name;
    m_startTime = startTime;
    m_endTime = endTime;
}

// get end time
QDateTime ScheduledTask::endTime() const
{
    return m_endTime;
}

// set end time
void ScheduledTask::setEndTime(const QDateTime &endTime)
{
    m_endTime = endTime;
}

// get start time
QDateTime ScheduledTask::startTime() const
{
    return m_startTime;
}

// set start time
void ScheduledTask::setStartTime(const QDateTime &startTime)
{
    m_startTime = startTime;
}

// get name
QString ScheduledTask::name() const
{
    return m_name;
}

// set name
void ScheduledTask::setName(const QString &name)
{
    m_name = name;
}

ScheduledTask::ScheduledTask(QObject *parent) : QObject(parent)
{

}







