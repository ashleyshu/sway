#include "QFileDialog"
#include "QTextStream"
#include "conslistdialog.h"
#include "ui_conslistdialog.h"

//!  Constraint List Dialog Class
/*!
    \Author: Group 33
    Description: Window to view currently inputted constraints.
*/
// Builds a window that lists the currently inputted constraints

//!  Constructor
/*!
    \Author: Group 33
    Description: cosntructor for constraint list dialog
    @param *controller the input controller
    @param *parent the windows parent
*/
ConsListDialog::ConsListDialog(InputController *controller, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConsListDialog),
    m_controller (controller)
{
    ui->setupUi(this);

    //Sets minimum and maximum index so that user doesn't remove non existant value
    ui->input_removeConstraintCount->setMaximum(controller->getConstraints().size());

    if (controller->getConstraints().isEmpty()) {
        ui->input_removeConstraintCount->setMinimum(0);
        ui->input_removeConstraintCount->setEnabled(false);
        ui->removeConstraintButton->setEnabled(false);
    } else {
        ui->input_removeConstraintCount->setMinimum(1);
    }


    for (ConstraintEntry* constraint : controller->getConstraints()) {
        QString constraintLine = constraint->getName() + " | " + constraint->getStartDate().toString("h:mm ap' 'MMMM d', 'yyyy") + " | " + QString::number(constraint->getMinRequired());
        ui->listWidget->addItem(constraintLine);
    }
}

ConsListDialog::~ConsListDialog()
{
    delete ui;
}

//!  Close Button Listener
void ConsListDialog::on_pushButton_clicked()
{
   close();
}

//!  Remove Constraint Button
void ConsListDialog::on_removeConstraintButton_clicked()
{
    int consToRemove = ui->input_removeConstraintCount->value() - 1;
    if (consToRemove < m_controller->getConstraints().size()) {
        m_controller->removeConstraint(consToRemove);
    }
    close();
}
