#include <QDebug>
#include "constraintentry.h"

//!  Constraint Entry Class
/*!
    \Authors: Group 33
    Description: Represents one constraint entry which is a block in which no tasks can be scheduled
*/

//! Empty Param Constructor
ConstraintEntry::ConstraintEntry(QObject *parent) : QObject(parent)
{

}

//!  Constructor with inputs
/*!
    \Authors: Group 33
    Description: Used to create an entry with params
    @param pName name of constraint
    @param pStartDate start time of task
    @param pMinRequired minuters required for cosntraint
*/
ConstraintEntry::ConstraintEntry(QString pName, QDateTime pStartDate, qint16 pMinRequired, QObject *parent) : QObject(parent)
{
    name = pName;
    startDate = pStartDate;
    minRequired = pMinRequired;
}

ConstraintEntry:: ~ConstraintEntry(){

}

//!  Get name
QString ConstraintEntry::getName() const
{
    return name;
}

//!  Set name
void ConstraintEntry::setName(const QString &value)
{
    if(name != value){
        name = value;
        emit nameChanged();
    }
}

//!  Get Start Date
QDateTime ConstraintEntry::getStartDate() const
{
    return startDate;
}

//!  Set Start Date
void ConstraintEntry::setStartDate(const QDateTime &value)
{
    if(startDate != value){
        startDate = value;
        emit startDateChanged();
    }
}

//!  Get Min Required
qint16 ConstraintEntry::getMinRequired() const
{
    return minRequired;
}

//!  Set Min Required
void ConstraintEntry::setMinRequired(const qint16 &value)
{
    if(minRequired != value){
        minRequired = value;
        emit minRequiredChanged();
    }
}

//!  Get End Date
QDateTime ConstraintEntry::getEndDate() const
{
    return startDate.addSecs(getMinRequired()*60);
}

