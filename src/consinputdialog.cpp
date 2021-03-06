#include <QMessageBox>
#include "consinputdialog.h"
#include "ui_consinputdialog.h"
#include "constraintentry.h"


//!  Constraint Input Dialog Class
/*!
    \Author: Group 33
    Description: Window to input constraints.
*/
ConsInputDialog::ConsInputDialog(InputController *controller, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConsInputDialog),
    m_controller (controller)
{
    ui->setupUi(this);

    // Set minimum start datetime and default datetime to current datetime.
    ui->input_startDate->setMinimumDateTime(QDateTime::currentDateTime());

    // Set maximum start datetime to today + 99 years.
    ui->input_startDate->setMaximumDateTime(QDateTime::currentDateTime().addYears(99));
}

ConsInputDialog::~ConsInputDialog()
{
    delete ui;
}

//! Adds constraint to input list
void ConsInputDialog::on_buttonBox_accepted()
{
        QString name = ui->input_name->toPlainText().replace(',','.');
        QDateTime startDate = ui->input_startDate->dateTime();
        qint16 minRequired = ui->input_minRequired->value();

        // Ensure that constraint is named.
        if(name == 0) {
            QMessageBox::information(NULL, QString::fromUtf8("Warning"),
                                     QString::fromUtf8("Please enter a constraint name"),
                                     QString::fromUtf8("Got it!"));
        }
        // Ensure constraint is in the future. Just in case someone gets around QT's UI validation.
        else if (startDate < QDateTime::currentDateTime()) {
            QMessageBox::information(NULL, QString::fromUtf8("Warning"),
                                  QString::fromUtf8("Warning: Your constraint cannot start in the past!"),
                                          QString::fromUtf8("Got it!"));
        }
        // Ensure that start date is within 99 years. Just in case someone gets around QT's UI validation.
        else if (startDate > QDateTime::currentDateTime().addYears(99)) {
            QMessageBox::information(NULL, QString::fromUtf8("Warning"),
                                     QString::fromUtf8("Warning: Please set a start date when you're most likely going to be alive"),
                                     QString::fromUtf8("Got it!"));
        }
        else {
            m_controller->addConstraint(name, startDate, minRequired);

            close();
        }
}

//!  Close Button Listener
void ConsInputDialog::on_buttonBox_rejected()
{
    close();
}

//! Name Change Listener
/*!
    \Author: Group 33
    Description: Listens for name change in order to limit char count
*/
void ConsInputDialog::on_input_name_textChanged()
{
    // Limit constraint name to 100 characters at most
    int maxChar = 100;
    if (ui->input_name->toPlainText().length() > maxChar) {
    ui->input_name->textCursor().deletePreviousChar();
    QMessageBox::information(NULL, QString::fromUtf8("Warning"),
                          QString::fromUtf8("Warning: Constraint name must be at most ") + QString::number(maxChar) + QString::fromUtf8(" characters long"),
                                  QString::fromUtf8("Got it!"));
    }
}

