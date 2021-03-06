#ifndef TASKENTRY_H
#define TASKENTRY_H

#include <QObject>
#include <QString>
#include <QDateTime>
#include <QGroupBox>
#include <QFile>
#include <QTextStream>

/*!
Authors: Group 33
Description: Header file for an inputted task which Sway needs to schedule.
Date: November 11, 2020 (WIP)
*/

class TaskEntry : public QObject
{
    Q_OBJECT

    // Declaring all QT properties using the Q_PROPERTY() macro in a class that inherits QObject.
    Q_PROPERTY(QString getTask_name READ getTask_name WRITE setTask_name NOTIFY nameChanged)
    Q_PROPERTY(QDateTime getTask_dueDate READ getTask_dueDate WRITE setTask_dueDate NOTIFY dueDateChanged)
    Q_PROPERTY(qint16 getTask_minRequired READ getTask_minRequired WRITE setTask_minRequired NOTIFY minRequiredChanged)


//Declaring all public methods in the taskentry class
public:
    explicit TaskEntry(QObject *parent = 0);
    TaskEntry(QString pName, QDateTime pDueDate, qint16 pMinRequired, QObject *parent = 0);
    ~TaskEntry();

    QString getTask_name() const;
    void setTask_name(const QString &value);

    QDateTime getTask_dueDate() const;
    void setTask_dueDate(const QDateTime &value);

    qint16 getTask_minRequired() const;
    void setTask_minRequired(const qint16 &value);

    //void writeTaskToFile(QString fileName, QString task_name, QString task_tag, QDateTime task_dueDate, qint16 task_minRequired, qint16 maxWBTime);
    //void writeTaskObjToFile(QString fileName, TaskEntry entry);

//Declaring different signals to broadcast changes
signals:
    void nameChanged();
    void dueDateChanged();
    void minRequiredChanged();

//Declaring all variables that will be used in the taskentry class
private:
    QString task_name;
    QDateTime task_dueDate;
    qint16 task_minRequired;
    //QGroupBox schedulingoptions;
    //qint16 maxWBTime;
    //QFile savedTaskData;
};

#endif // TASKENTRY_H
