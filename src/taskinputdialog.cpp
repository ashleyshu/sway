#include "QInputDialog"
#include "QMessageBox"
#include "QDateTime"
#include "QDebug"
#include "QPushButton"
#include "taskinputdialog.h"
#include "ui_taskinputdialog.h"
#include "taskentry.h"
#include "inputcontroller.h"

//!  Task Input Dialog Class
/*!
    \Authors: Group 33
    Description: Window which user can sue to input a task
*/

TaskInputDialog::TaskInputDialog(InputController *controller, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TaskInputDialog),
    m_controller (controller)

{
    ui->setupUi(this);

    // Set minimum due date to current datetime + 60 seconds.
    ui->input_dueDate->setMinimumDateTime(QDateTime::currentDateTime().addSecs(60));
}


TaskInputDialog::~TaskInputDialog()
{
    delete ui;
}

//!  Close Button listener
void TaskInputDialog::on_buttonBox_rejected()
{
    close();
}

//! Add Task Button listener
/*!
    \Author: Group 33
    Description: Adds task to inputs
*/
void TaskInputDialog::on_buttonBox_accepted()
{
    QString name = ui->input_name->toPlainText().replace(',','.');
    QDateTime dueDate = ui->input_dueDate->dateTime();
    qint16 minRequired = ui->input_hrR_hr->value();

    // Ensure that task is named
    if(name == 0) {
        QMessageBox::information(NULL, QString::fromUtf8("Warning"),
                                 QString::fromUtf8("Please enter a task name"),
                                 QString::fromUtf8("Got it!"));
    }
    // Ensure there's enough time to finish task
    else if (QDateTime::currentDateTime().secsTo(dueDate) < minRequired*60) {
        QMessageBox::information(NULL, QString::fromUtf8("Warning"),
                                 QString::fromUtf8("Warning: You cannot complete this task by the due date specified if it takes ") + QString::number(minRequired) + QString::fromUtf8(" minutes!"),
                                 QString::fromUtf8("Got it!"));
    }
    // Ensure due date is within 99 years
    else if (dueDate > QDateTime::currentDateTime().addYears(99)) {
        QMessageBox::information(NULL, QString::fromUtf8("Warning"),
                                 QString::fromUtf8("Warning: Due date must be within 99 years"),
                                 QString::fromUtf8("Got it!"));
    }
    else {
        m_controller->addTask(name, dueDate, minRequired);
        m_controller->printTasksToConsole();

        close();
    }
}

//! Name change listener
/*!
    \Author: Group 33
    Description: Listens to name change to limit char count
*/
void TaskInputDialog::on_input_name_textChanged()
{
    // Limit task name to 100 characters at most
    int maxChar = 100;
    if (ui->input_name->toPlainText().length() > maxChar) {
    ui->input_name->textCursor().deletePreviousChar();
    QMessageBox::information(NULL, QString::fromUtf8("Warning"),
                             QString::fromUtf8("Warning: Task name must be at most ") + QString::number(maxChar) + QString::fromUtf8(" characters long"),
                             QString::fromUtf8("Got it!"));
    }
}

