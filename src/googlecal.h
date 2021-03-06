#ifndef GOOGLECAL_H
#define GOOGLECAL_H

#include <QDialog>
#include <QMainWindow>

/*!
Authors: Group 33
Description: Header for window that gives Google Calendar upload instructions.
Date: November 11, 2020 (WIP)
*/

namespace Ui {
class GoogleCal;
}

class GoogleCal: public QDialog
{
   Q_OBJECT

public:
   explicit GoogleCal(QWidget *parent = nullptr);
   ~GoogleCal();

private slots:
   void on_closeGoogleCal_clicked();
   void on_pushButton_clicked();

private:
   Ui::GoogleCal *ui;
};


#endif // GOOGLECAL_H

