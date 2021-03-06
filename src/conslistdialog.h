#ifndef CONSLISTDIALOG_H
#define CONSLISTDIALOG_H

#include <QFile>
#include <QDialog>
#include "mainwindow.h"

/*!
Authors: Group 33
Description: Header for window to view constraints.
Date: November 11, 2020 (WIP)
*/

namespace Ui {
class ConsListDialog;
}

class ConsListDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConsListDialog(InputController *controller, QWidget *parent = nullptr);
    ~ConsListDialog();

private slots:
    void on_pushButton_clicked();
    void on_removeConstraintButton_clicked();

private:
    Ui::ConsListDialog *ui;
    QFile dataFile;
    InputController *m_controller;
};

#endif // CONSLISTDIALOG_H
