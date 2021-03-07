/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *topPanel;
    QWidget *Content;
    QVBoxLayout *verticalLayout;
    QPushButton *bTaskAdd;
    QPushButton *bTaskView;
    QPushButton *bConsAdd;
    QPushButton *bConsView;
    QPushButton *bSchedLoad;
    QPushButton *bSchedSave;
    QPushButton *bGoogleCal;
    QPushButton *bSchedGen;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1029, 974);
        MainWindow->setMinimumSize(QSize(1029, 853));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/graylogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setAutoFillBackground(false);
        MainWindow->setStyleSheet(QLatin1String("#MainWindow{\n"
"background: #c3c3c3;\n"
"}\n"
"\n"
"#centralwidget{\n"
"border-image:url(:/images/finalBackground.jpg)\n"
"}\n"
"\n"
"QPushButton, QMenuButton, QStatusBar{\n"
"font-family: \"Roboto Black\";\n"
"font-size: 42px;\n"
"background-color: white;\n"
"}\n"
"\n"
"\n"
"QPushButton:hover{\n"
"background-color: #eb3f79;\n"
"color: white;\n"
"\n"
"}\n"
"\n"
"QRadioButton::indicator::unchecked{\n"
"border: 3px solid;\n"
"border-color: white;\n"
"border-radius: 6px;\n"
"background-color: white;\n"
"}\n"
"\n"
"QRadioButton::indicator::checked{\n"
"border: 3px solid;\n"
"border-color: white;\n"
"border-radius: 6px;\n"
"background-color: #eb3f79\n"
"}\n"
"\n"
"\n"
""));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        topPanel = new QWidget(centralwidget);
        topPanel->setObjectName(QStringLiteral("topPanel"));
        topPanel->setGeometry(QRect(0, 0, 1029, 131));
        topPanel->setMinimumSize(QSize(1029, 131));
        topPanel->setStyleSheet(QLatin1String("#topPanel{\n"
"border-image:url(:/images/mainHeader.png)\n"
"}"));
        Content = new QWidget(centralwidget);
        Content->setObjectName(QStringLiteral("Content"));
        Content->setGeometry(QRect(50, 160, 931, 731));
        verticalLayout = new QVBoxLayout(Content);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        bTaskAdd = new QPushButton(Content);
        bTaskAdd->setObjectName(QStringLiteral("bTaskAdd"));
        bTaskAdd->setMinimumSize(QSize(0, 80));

        verticalLayout->addWidget(bTaskAdd);

        bTaskView = new QPushButton(Content);
        bTaskView->setObjectName(QStringLiteral("bTaskView"));
        bTaskView->setMinimumSize(QSize(0, 80));

        verticalLayout->addWidget(bTaskView);

        bConsAdd = new QPushButton(Content);
        bConsAdd->setObjectName(QStringLiteral("bConsAdd"));
        bConsAdd->setMinimumSize(QSize(0, 80));

        verticalLayout->addWidget(bConsAdd);

        bConsView = new QPushButton(Content);
        bConsView->setObjectName(QStringLiteral("bConsView"));
        bConsView->setMinimumSize(QSize(0, 80));

        verticalLayout->addWidget(bConsView);

        bSchedLoad = new QPushButton(Content);
        bSchedLoad->setObjectName(QStringLiteral("bSchedLoad"));
        bSchedLoad->setMinimumSize(QSize(0, 80));

        verticalLayout->addWidget(bSchedLoad);

        bSchedSave = new QPushButton(Content);
        bSchedSave->setObjectName(QStringLiteral("bSchedSave"));
        bSchedSave->setMinimumSize(QSize(0, 80));

        verticalLayout->addWidget(bSchedSave);

        bGoogleCal = new QPushButton(Content);
        bGoogleCal->setObjectName(QStringLiteral("bGoogleCal"));
        bGoogleCal->setMinimumSize(QSize(0, 80));

        verticalLayout->addWidget(bGoogleCal);

        bSchedGen = new QPushButton(Content);
        bSchedGen->setObjectName(QStringLiteral("bSchedGen"));
        bSchedGen->setMinimumSize(QSize(0, 80));

        verticalLayout->addWidget(bSchedGen);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Sway", nullptr));
        bTaskAdd->setText(QApplication::translate("MainWindow", "Add Task", nullptr));
        bTaskView->setText(QApplication::translate("MainWindow", "View Task List", nullptr));
        bConsAdd->setText(QApplication::translate("MainWindow", "Add Constraint", nullptr));
        bConsView->setText(QApplication::translate("MainWindow", "View Constraint List", nullptr));
        bSchedLoad->setText(QApplication::translate("MainWindow", "Load Inputs", nullptr));
        bSchedSave->setText(QApplication::translate("MainWindow", "Save Inputs", nullptr));
        bSchedGen->setText(QApplication::translate("MainWindow", "Generate Schedule and Download as CSV File", nullptr));
        bGoogleCal->setText(QApplication::translate("MainWindow", "Export to Google Calendar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
