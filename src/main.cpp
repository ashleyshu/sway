#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include "mainwindow.h"

//!  Constraint Input Dialog Class
/*!
    \Author: Group 33
    Description: Main file which initializes and displays the main window.
*/

//!  Main Function
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    InputController controller;
    MainWindow w( &controller );
    w.show();
    return a.exec();
}
