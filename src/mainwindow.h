#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "inputcontroller.h"

/*!
Authors: Group 33
Description: Header for main window from where user can select options and use program.
Date: November 11, 2020 (WIP)
*/

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow( InputController *controller, QWidget *parent = nullptr);
    ~MainWindow();

// Each of these slots corresponds to a button in the UI being clicked.
private slots:
    void on_bTaskView_clicked();
    void on_bConsView_clicked();
    void on_bTaskAdd_clicked();
    void on_bConsAdd_clicked();
    void on_bSchedGen_clicked();
    void on_bSchedSave_clicked();
    void on_bGoogleCal_clicked();
    void on_bSchedLoad_clicked();

private:
    Ui::MainWindow *ui;
    InputController *m_controller;
};
#endif // MAINWINDOW_H
