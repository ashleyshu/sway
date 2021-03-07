/********************************************************************************
** Form generated from reading UI file 'tasklistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASKLISTDIALOG_H
#define UI_TASKLISTDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TaskListDialog
{
public:
    QWidget *content;
    QListWidget *listWidget;
    QWidget *topPanel;
    QLabel *Title;
    QPushButton *pushButton;
    QPushButton *removeTaskButton;
    QSpinBox *input_removeTaskCount;
    QLabel *removeTaskLabel;

    void setupUi(QDialog *TaskListDialog)
    {
        if (TaskListDialog->objectName().isEmpty())
            TaskListDialog->setObjectName(QStringLiteral("TaskListDialog"));
        TaskListDialog->setEnabled(true);
        TaskListDialog->resize(1108, 1102);
        TaskListDialog->setMinimumSize(QSize(61, 1013));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/graylogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        TaskListDialog->setWindowIcon(icon);
        TaskListDialog->setStyleSheet(QLatin1String("#TaskListDialog{\n"
"background: #c3c3c3;\n"
"border-image:url(:/images/finalBackground.jpg)\n"
"}\n"
"\n"
"QPushButton, QMenuButton, QStatusBar, QTextEdit, QLabel, QListWidget{\n"
"font-family: \"Roboto Black\";\n"
"font-size: 42px;\n"
"}\n"
"\n"
"\n"
"QPushButton{\n"
"background-color:white;\n"
"}\n"
"\n"
"QPushButton:hover{\n"
"background-color: #eb3f79;\n"
"color: white;\n"
"}\n"
"\n"
"\n"
"\n"
"\n"
""));
        content = new QWidget(TaskListDialog);
        content->setObjectName(QStringLiteral("content"));
        content->setGeometry(QRect(80, 210, 950, 706));
        content->setMinimumSize(QSize(950, 706));
        listWidget = new QListWidget(content);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(0, 10, 951, 701));
        listWidget->setMinimumSize(QSize(941, 701));
        QFont font;
        font.setFamily(QStringLiteral("Roboto Black"));
        listWidget->setFont(font);
        listWidget->setStyleSheet(QLatin1String("#listWidget{\n"
"selection-color: red;\n"
"selection-background-color: green;\n"
"}\n"
""));
        topPanel = new QWidget(TaskListDialog);
        topPanel->setObjectName(QStringLiteral("topPanel"));
        topPanel->setGeometry(QRect(8, 0, 1111, 131));
        topPanel->setMinimumSize(QSize(1029, 131));
        topPanel->setStyleSheet(QLatin1String("#topPanel{\n"
"border-image:url(:/images/mainHeader.png)\n"
"}"));
        Title = new QLabel(TaskListDialog);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(390, 160, 321, 41));
        Title->setStyleSheet(QLatin1String("#Title{\n"
"font-size: 52px;\n"
"font-weight: bold;\n"
"}"));
        pushButton = new QPushButton(TaskListDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(630, 1020, 181, 61));
        pushButton->setMinimumSize(QSize(0, 61));
        removeTaskButton = new QPushButton(TaskListDialog);
        removeTaskButton->setObjectName(QStringLiteral("removeTaskButton"));
        removeTaskButton->setGeometry(QRect(840, 1020, 191, 61));
        removeTaskButton->setMinimumSize(QSize(0, 61));
        removeTaskButton->setBaseSize(QSize(0, 61));
        QFont font1;
        font1.setFamily(QStringLiteral("Roboto Black"));
        font1.setKerning(true);
        removeTaskButton->setFont(font1);
        input_removeTaskCount = new QSpinBox(TaskListDialog);
        input_removeTaskCount->setObjectName(QStringLiteral("input_removeTaskCount"));
        input_removeTaskCount->setGeometry(QRect(840, 940, 191, 61));
        input_removeTaskCount->setMinimumSize(QSize(191, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Shell Dlg 2"));
        input_removeTaskCount->setFont(font2);
        input_removeTaskCount->setStyleSheet(QLatin1String("#input_removeTaskCount{\n"
"font-size: 42px;\n"
"padding-right: 5px;\n"
"}"));
        input_removeTaskCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        input_removeTaskCount->setMinimum(0);
        input_removeTaskCount->setMaximum(1);
        removeTaskLabel = new QLabel(TaskListDialog);
        removeTaskLabel->setObjectName(QStringLiteral("removeTaskLabel"));
        removeTaskLabel->setGeometry(QRect(80, 940, 661, 61));
        removeTaskLabel->setMinimumSize(QSize(0, 61));
        removeTaskLabel->setStyleSheet(QLatin1String("#Title{\n"
"font-size: 52px;\n"
"font-weight: bold;\n"
"}\n"
"#removeTaskLabel{\n"
"font-size: 45px;\n"
"}"));

        retranslateUi(TaskListDialog);

        QMetaObject::connectSlotsByName(TaskListDialog);
    } // setupUi

    void retranslateUi(QDialog *TaskListDialog)
    {
        TaskListDialog->setWindowTitle(QApplication::translate("TaskListDialog", "Tasks", nullptr));
        Title->setText(QApplication::translate("TaskListDialog", "List of Tasks", nullptr));
        pushButton->setText(QApplication::translate("TaskListDialog", "Back", nullptr));
        removeTaskButton->setText(QApplication::translate("TaskListDialog", "Remove", nullptr));
        removeTaskLabel->setText(QApplication::translate("TaskListDialog", "Select Task Number To Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TaskListDialog: public Ui_TaskListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TASKLISTDIALOG_H
