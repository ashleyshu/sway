#include <QFileDialog>
#include <QTextStream>
#include <QDebug>
#include "tasklistdialog.h"
#include "ui_tasklistdialog.h"

//!  Task List Class
/*!
    \Authors: Group 33
    Description: Window which user can use to view their task list.
*/

//!  Constructor
/*!
    \Authors: Group 33
    @param controller input controller object
    @param parent window's parent which is main window in this case
*/
TaskListDialog::TaskListDialog(InputController *controller, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TaskListDialog),
    m_controller (controller)
{
    ui->setupUi(this);

    // Setting minimum input to remove task
    ui->input_removeTaskCount->setMaximum(controller->getTasks().size());

    if (controller->getTasks().isEmpty()) {
        ui->input_removeTaskCount->setMinimum(0);
        ui->input_removeTaskCount->setEnabled(false);
        ui->removeTaskButton->setEnabled(false);
    } else {
        ui->input_removeTaskCount->setMinimum(1);
    }

    for (TaskEntry* task : controller->getTasks()) {
        QString taskLine = task->getTask_name() + " | " + task->getTask_dueDate().toString("h:mm ap' 'MMMM d', 'yyyy") + " | " + QString::number(task->getTask_minRequired());
        ui->listWidget->addItem(taskLine);
    }
}

TaskListDialog::~TaskListDialog()
{
    delete ui;
}

//!  Close Button listener
void TaskListDialog::on_pushButton_clicked()
{
   close();
}

//! Remove Button listener
/*!
    \Authors: Group 33
    Description: Listens for when remove task button is clicked and then removes that task
*/
void TaskListDialog::on_removeTaskButton_clicked()
{
    int taskToRemove = ui->input_removeTaskCount->value() - 1;
    qDebug() << taskToRemove;
    if (taskToRemove < m_controller->getTasks().size()) {
        m_controller->removeTask(taskToRemove);
    }
    close();
}



