#ifndef SCHEDULEDTASK_H
#define SCHEDULEDTASK_H

#include <QObject>
#include <QDateTime>

/*!
Authors: Group 33
Description: Header for scheduled task which represents one task that has been scheduled.
Date: November 11, 2020 (WIP)
*/

class ScheduledTask : public QObject
{
    Q_OBJECT

private:
    QString m_name;
    QDateTime m_startTime;
    QDateTime m_endTime;


public:
    explicit ScheduledTask(QObject *parent = nullptr);
    ScheduledTask(QString name, QDateTime startTime, QDateTime endTime, QObject *parent = nullptr);

    QDateTime endTime() const;
    void setEndTime(const QDateTime &endTime);

    QDateTime startTime() const;
    void setStartTime(const QDateTime &startTime);

    QString name() const;
    void setName(const QString &name);

signals:

};

#endif // SCHEDULEDTASK_H
