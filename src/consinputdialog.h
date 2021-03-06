#ifndef CONSINPUTDIALOG_H
#define CONSINPUTDIALOG_H

#include <QDialog>
#include "mainwindow.h"

/*!
Authors: Group 33
Description: Header for window to input constraints.
Date: November 11, 2020 (WIP)
*/

namespace Ui {
class ConsInputDialog;
}

class ConsInputDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ConsInputDialog(InputController *controller, QWidget *parent = nullptr);
    ~ConsInputDialog();

private slots:
    void on_buttonBox_accepted();
    void on_buttonBox_rejected();
    void on_input_name_textChanged();

private:
    Ui::ConsInputDialog *ui;
    InputController *m_controller;
};

#endif // CONSINPUTDIALOG_H
