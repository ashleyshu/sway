#include <QFileDialog>
#include <QInputDialog>
#include <QProcess>
#include <QMessageBox>
#include <QTextStream>
#include <QFile>
#include <QDebug>
#include "googlecal.h"
#include "ui_googlecal.h"

//!  Google Calendar Communicator Class
/*!
    \Authors: Group 33
    Description: Class which allows user to upload their schedule to their google calendar.
*/

//! Constructor
/*!
    \Author: Group 33
    @param parent the parent of the widget (main window)
*/
GoogleCal::GoogleCal(QWidget *parent):
   QDialog(parent),
   ui(new Ui::GoogleCal)
{
   ui->setupUi(this);
}


GoogleCal::~GoogleCal()
{
   delete ui;
}

//!  Export to Google Cal
/*!
    \Author: Group 33
    Description: Saves the schedule file to the suers google calendar
*/
void GoogleCal::on_closeGoogleCal_clicked()
{

    QString fileName = QFileDialog::getOpenFileName(this,
           tr("Select Schedule File."), "",
           tr("CSV (*.csv)"));

    if (fileName.isEmpty()) {

            return;
    }
    else

    {
        QFile file(fileName);

        if (!file.open(QIODevice::ReadOnly)) {
            QMessageBox::information(this, tr("Unable to open file"),
                file.errorString());
            return;
        }

        QTextStream in(&file);
        if (in.atEnd()) {
            return;
        }
        QString line = in.readLine();

        if (line.split(',').length() == 0 || line.split(',')[0].compare("Subject") != 0) {
            return;
        }

        file.close();
        QString command("python");
        QStringList params {"quickstart.py", fileName};

        QProcess *process = new QProcess();

        qDebug() << QDir::currentPath();
        process->startDetached(command, params);
        process->waitForFinished();
        process->close();
    }
}

//!  Close Button Listener
void GoogleCal::on_pushButton_clicked()
{
   close();
}

