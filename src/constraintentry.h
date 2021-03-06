#ifndef CONSTRAINTENTRY_H
#define CONSTRAINTENTRY_H

#include <QObject>
#include <QString>
#include <QDateTime>
#include <QFile>
#include <QTextStream>

/*!
Authors: Group 33
Description: Header for class that represents one inputted constraint.
Date: November 11, 2020 (WIP)
*/

class ConstraintEntry : public QObject
{
    Q_OBJECT

    Q_PROPERTY(QString getName READ getName WRITE setName NOTIFY nameChanged)
    Q_PROPERTY(QDateTime getStartDate READ getStartDate WRITE setStartDate NOTIFY startDateChanged)
    Q_PROPERTY(qint16 getMinRequired READ getMinRequired WRITE setMinRequired NOTIFY minRequiredChanged)

public:
    explicit ConstraintEntry(QObject *parent = 0);
    ConstraintEntry(QString pName, QDateTime pStartDate, qint16 pMinRequired, QObject *parent = 0);
    ~ConstraintEntry();

    QString getName() const;
    void setName(const QString &value);

    QDateTime getStartDate() const;
    void setStartDate(const QDateTime &value);

    qint16 getMinRequired() const;
    void setMinRequired(const qint16 &value);

    QDateTime getEndDate() const;

    void writeConstraintToFile(QString fileName, QString break_name, qint16 break_timehr);

signals:
    void nameChanged();
    void startDateChanged();
    void minRequiredChanged();

private:

    QString name;
    QDateTime startDate;
    qint16 minRequired;
    // QString savedConstraintData;
};

#endif // CONSTRAINTENTRY_H

