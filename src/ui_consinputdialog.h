/********************************************************************************
** Form generated from reading UI file 'consinputdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSINPUTDIALOG_H
#define UI_CONSINPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ConsInputDialog
{
public:
    QWidget *Content;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QTextEdit *input_name;
    QDateTimeEdit *input_startDate;
    QLabel *label_minRequired;
    QSpinBox *input_minRequired;
    QLabel *label_name;
    QLabel *label_startDate;
    QDialogButtonBox *buttonBox;
    QWidget *topPanel;
    QLabel *Title;

    void setupUi(QDialog *ConsInputDialog)
    {
        if (ConsInputDialog->objectName().isEmpty())
            ConsInputDialog->setObjectName(QStringLiteral("ConsInputDialog"));
        ConsInputDialog->resize(994, 635);
        ConsInputDialog->setMinimumSize(QSize(983, 635));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/graylogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConsInputDialog->setWindowIcon(icon);
        ConsInputDialog->setStyleSheet(QLatin1String("#ConsInputDialog{\n"
"background: #c3c3c3;\n"
"border-image:url(:/images/finalBackground.jpg)\n"
"}\n"
"\n"
"QSpinBox, QTextEdit, QDateTimeEdit, QPushButton, QLabel{\n"
"font-family: \"Roboto Black\";\n"
"font-size: 42px;\n"
"}\n"
"\n"
"QPushButton{\n"
"background-color:white;\n"
"padding: 10px;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: #eb3f79;\n"
"color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked{\n"
"border: 3px solid;\n"
"border-color: white;\n"
"border-radius: 6px;\n"
"background-color: black;\n"
"}\n"
"\n"
"QRadioButton::indicator::checked{\n"
"border: 3px solid;\n"
"border-color: black;\n"
"border-radius: 6px;\n"
"background-color: #eb3f79\n"
"}\n"
"\n"
"\n"
"\n"
""));
        Content = new QWidget(ConsInputDialog);
        Content->setObjectName(QStringLiteral("Content"));
        Content->setGeometry(QRect(20, 170, 971, 441));
        formLayoutWidget = new QWidget(Content);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(90, 40, 821, 311));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        input_name = new QTextEdit(formLayoutWidget);
        input_name->setObjectName(QStringLiteral("input_name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, input_name);

        input_startDate = new QDateTimeEdit(formLayoutWidget);
        input_startDate->setObjectName(QStringLiteral("input_startDate"));
        QFont font;
        font.setFamily(QStringLiteral("Roboto Black"));
        input_startDate->setFont(font);
        input_startDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        input_startDate->setDateTime(QDateTime(QDate(2020, 11, 1), QTime(0, 0, 0)));
        input_startDate->setMinimumDateTime(QDateTime(QDate(2020, 11, 1), QTime(0, 0, 0)));

        formLayout->setWidget(2, QFormLayout::FieldRole, input_startDate);

        label_minRequired = new QLabel(formLayoutWidget);
        label_minRequired->setObjectName(QStringLiteral("label_minRequired"));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto Black"));
        font1.setBold(true);
        font1.setWeight(75);
        label_minRequired->setFont(font1);
        label_minRequired->setWordWrap(true);

        formLayout->setWidget(4, QFormLayout::LabelRole, label_minRequired);

        input_minRequired = new QSpinBox(formLayoutWidget);
        input_minRequired->setObjectName(QStringLiteral("input_minRequired"));
        input_minRequired->setFont(font);
        input_minRequired->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        input_minRequired->setMinimum(1);
        input_minRequired->setMaximum(1440);
        input_minRequired->setSingleStep(1);
        input_minRequired->setValue(1);

        formLayout->setWidget(4, QFormLayout::FieldRole, input_minRequired);

        label_name = new QLabel(formLayoutWidget);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setMinimumSize(QSize(350, 0));
        label_name->setFont(font1);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_name);

        label_startDate = new QLabel(formLayoutWidget);
        label_startDate->setObjectName(QStringLiteral("label_startDate"));
        label_startDate->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_startDate);

        buttonBox = new QDialogButtonBox(Content);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(610, 350, 300, 61));
        buttonBox->setMinimumSize(QSize(300, 61));
        QFont font2;
        font2.setPointSize(17);
        buttonBox->setFont(font2);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);
        topPanel = new QWidget(ConsInputDialog);
        topPanel->setObjectName(QStringLiteral("topPanel"));
        topPanel->setGeometry(QRect(-30, -10, 1029, 131));
        topPanel->setMinimumSize(QSize(1029, 131));
        topPanel->setStyleSheet(QLatin1String("#topPanel{\n"
"border-image:url(:/images/mainHeader.png)\n"
"}"));
        Title = new QLabel(ConsInputDialog);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(280, 140, 431, 59));
        Title->setStyleSheet(QLatin1String("QLabel{\n"
"font-weight: bold;\n"
"font-size: 52px;\n"
"}\n"
"\n"
""));

        retranslateUi(ConsInputDialog);

        QMetaObject::connectSlotsByName(ConsInputDialog);
    } // setupUi

    void retranslateUi(QDialog *ConsInputDialog)
    {
        ConsInputDialog->setWindowTitle(QApplication::translate("ConsInputDialog", "Constraints Input", nullptr));
        label_minRequired->setText(QApplication::translate("ConsInputDialog", "Time Needed       (1-1440 Mins)", nullptr));
        label_name->setText(QApplication::translate("ConsInputDialog", "Constraint Name", nullptr));
        label_startDate->setText(QApplication::translate("ConsInputDialog", "Start Date", nullptr));
        Title->setText(QApplication::translate("ConsInputDialog", "Constraints Input", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsInputDialog: public Ui_ConsInputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSINPUTDIALOG_H
