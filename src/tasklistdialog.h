#ifndef TASKLISTDIALOG_H
#define TASKLISTDIALOG_H

#include <QFile>
#include <QDialog>
#include <mainwindow.h>

/*!
Authors: Group 33
Description: Header for window which user can use to view their task list.
Date: November 11, 2020 (WIP)
*/


namespace Ui {
class TaskListDialog;
}

class TaskListDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TaskListDialog(InputController *controller, QWidget *parent = nullptr);
    ~TaskListDialog();

private slots:
    void on_pushButton_clicked();
    void on_removeTaskButton_clicked();

private:
    Ui::TaskListDialog *ui;
    QFile dataFile;
    InputController *m_controller;
};

#endif // TASKLISTDIALOG_H
