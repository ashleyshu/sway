/********************************************************************************
** Form generated from reading UI file 'taskinputdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKINPUTDIALOG_H
#define UI_TASKINPUTDIALOG_H

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

class Ui_TaskInputDialog
{
public:
    QWidget *Content;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_name;
    QLabel *label_dueDate;
    QDateTimeEdit *input_dueDate;
    QLabel *label_hrRequired;
    QSpinBox *input_hrR_hr;
    QTextEdit *input_name;
    QWidget *topPanel;
    QLabel *Title;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *TaskInputDialog)
    {
        if (TaskInputDialog->objectName().isEmpty())
            TaskInputDialog->setObjectName(QStringLiteral("TaskInputDialog"));
        TaskInputDialog->resize(994, 789);
        TaskInputDialog->setMinimumSize(QSize(994, 654));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/graylogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        TaskInputDialog->setWindowIcon(icon);
        TaskInputDialog->setStyleSheet(QLatin1String("#TaskInputDialog{\n"
"background: #c3c3c3;\n"
"border-image:url(:/images/finalBackground.jpg)\n"
"}\n"
"\n"
"QPushButton, QMenuButton, QStatusBar, QTextEdit, QLabel, QDateTimeEdit, QSpinBox{\n"
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
"border-color: black;\n"
"border-radius: 6px;\n"
"background-color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator::checked{\n"
"border: 3px solid;\n"
"border-color: black;\n"
"border-radius: 6px;\n"
"background-color: #eb3f79\n"
"}\n"
""));
        Content = new QWidget(TaskInputDialog);
        Content->setObjectName(QStringLiteral("Content"));
        Content->setGeometry(QRect(30, 220, 921, 501));
        formLayoutWidget = new QWidget(Content);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(30, 20, 861, 441));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_name = new QLabel(formLayoutWidget);
        label_name->setObjectName(QStringLiteral("label_name"));
        label_name->setMinimumSize(QSize(300, 30));
        QFont font;
        font.setFamily(QStringLiteral("Roboto Black"));
        font.setBold(true);
        font.setWeight(75);
        label_name->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label_name);

        label_dueDate = new QLabel(formLayoutWidget);
        label_dueDate->setObjectName(QStringLiteral("label_dueDate"));
        label_dueDate->setMinimumSize(QSize(182, 55));
        label_dueDate->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_dueDate);

        input_dueDate = new QDateTimeEdit(formLayoutWidget);
        input_dueDate->setObjectName(QStringLiteral("input_dueDate"));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto Black"));
        input_dueDate->setFont(font1);
        input_dueDate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        input_dueDate->setDateTime(QDateTime(QDate(2020, 11, 22), QTime(0, 0, 0)));
        input_dueDate->setMinimumDateTime(QDateTime(QDate(2020, 11, 1), QTime(0, 0, 0)));

        formLayout->setWidget(1, QFormLayout::FieldRole, input_dueDate);

        label_hrRequired = new QLabel(formLayoutWidget);
        label_hrRequired->setObjectName(QStringLiteral("label_hrRequired"));
        label_hrRequired->setFont(font);
        label_hrRequired->setWordWrap(true);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_hrRequired);

        input_hrR_hr = new QSpinBox(formLayoutWidget);
        input_hrR_hr->setObjectName(QStringLiteral("input_hrR_hr"));
        input_hrR_hr->setFont(font1);
        input_hrR_hr->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        input_hrR_hr->setMinimum(1);
        input_hrR_hr->setMaximum(1440);

        formLayout->setWidget(2, QFormLayout::FieldRole, input_hrR_hr);

        input_name = new QTextEdit(formLayoutWidget);
        input_name->setObjectName(QStringLiteral("input_name"));
        input_name->setMinimumSize(QSize(0, 6));

        formLayout->setWidget(0, QFormLayout::FieldRole, input_name);

        topPanel = new QWidget(TaskInputDialog);
        topPanel->setObjectName(QStringLiteral("topPanel"));
        topPanel->setGeometry(QRect(-10, -10, 1029, 131));
        topPanel->setMinimumSize(QSize(1029, 131));
        topPanel->setStyleSheet(QLatin1String("#topPanel{\n"
"border-image:url(:/images/mainHeader.png)\n"
"}"));
        Title = new QLabel(TaskInputDialog);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(360, 150, 301, 61));
        Title->setStyleSheet(QLatin1String("#Title{\n"
"font-weight: bold;\n"
"font-size: 52px;\n"
"}"));
        buttonBox = new QDialogButtonBox(TaskInputDialog);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(620, 700, 300, 61));
        buttonBox->setMinimumSize(QSize(300, 61));
        QFont font2;
        font2.setPointSize(17);
        buttonBox->setFont(font2);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Save);

        retranslateUi(TaskInputDialog);

        QMetaObject::connectSlotsByName(TaskInputDialog);
    } // setupUi

    void retranslateUi(QDialog *TaskInputDialog)
    {
        TaskInputDialog->setWindowTitle(QApplication::translate("TaskInputDialog", "Add Task", nullptr));
        label_name->setText(QApplication::translate("TaskInputDialog", "Task Name", nullptr));
        label_dueDate->setText(QApplication::translate("TaskInputDialog", "Due Date", nullptr));
        input_dueDate->setDisplayFormat(QApplication::translate("TaskInputDialog", "M/d/yyyy h:mm AP", nullptr));
        label_hrRequired->setText(QApplication::translate("TaskInputDialog", "Time Needed               (1-1440 Mins)", nullptr));
        Title->setText(QApplication::translate("TaskInputDialog", "Input Tasks", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskInputDialog: public Ui_TaskInputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKINPUTDIALOG_H
