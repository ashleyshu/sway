#include <QDebug>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "tasklistdialog.h"
#include "conslistdialog.h"
#include "taskinputdialog.h"
#include "consinputdialog.h"
#include "schedulecreator.h"
#include "googlecal.h"

//!  Main Window Class
/*!
    \Author: Group 33
    Description: Main window from where user can select options and use program.
*/


//!  Construction
/*!
    \Authors: Group 33
    Description: Constructor
    @param controller the input controller
    @param parent the parent of this widget
*/
MainWindow::MainWindow(InputController *controller, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow),
      m_controller (controller)
{
    Q_ASSERT(controller != nullptr);
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

//!  Opens tasks view
void MainWindow::on_bTaskView_clicked()
{
    TaskListDialog tasklistdialog(m_controller);
    tasklistdialog.setModal(true);
    tasklistdialog.exec();
}

//!  Opens constraintss view
void MainWindow::on_bConsView_clicked()
{
    ConsListDialog conslistdialog(m_controller);
    conslistdialog.setModal(true);
    conslistdialog.exec();
}

//!  Opens task input screen
void MainWindow::on_bTaskAdd_clicked()
{
    TaskInputDialog taskinputdialog(m_controller);
    taskinputdialog.setModal(true);
    taskinputdialog.exec();
}

//!  Opens constraint input view
void MainWindow::on_bConsAdd_clicked()
{
    ConsInputDialog consinputdialog(m_controller);
    consinputdialog.setModal(true);
    consinputdialog.exec();
}

//!  Generatives schedule and saves as CSV
void MainWindow::on_bSchedGen_clicked()
{
    ScheduleCreator scheduleCreator(m_controller);
    scheduleCreator.createSchedule();
}

//!  Opens google calendar dialog
void MainWindow::on_bGoogleCal_clicked()
{
   GoogleCal googleCal;
   googleCal.setModal(true);
   googleCal.exec();
}

//!  Save task and constraint inputs
void MainWindow::on_bSchedSave_clicked() {
    m_controller->saveInputs();
}

//!  Load task and constraint inputs
void MainWindow::on_bSchedLoad_clicked() {
    m_controller->loadInputs();
}















