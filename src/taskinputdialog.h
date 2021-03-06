#ifndef TASKINPUTDIALOG_H
#define TASKINPUTDIALOG_H

#include <QDialog>
#include <QWidget>
#include "mainwindow.h"


/*!
Authors: Group 33
Description: Header for window which user can use to input a task.
Date: November 11, 2020 (WIP)
*/

namespace Ui {
class TaskInputDialog;
}

class TaskInputDialog : public QDialog
{
    Q_OBJECT

public:
    explicit TaskInputDialog( InputController *controller, QWidget *parent = nullptr);
    ~TaskInputDialog();

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_input_name_textChanged();

private:
    Ui::TaskInputDialog *ui;
    InputController *m_controller;
};

#endif // TASKINPUTDIALOG_H
