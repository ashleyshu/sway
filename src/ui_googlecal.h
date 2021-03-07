/********************************************************************************
** Form generated from reading UI file 'googlecal.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GOOGLECAL_H
#define UI_GOOGLECAL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GoogleCal
{
public:
    QWidget *content;
    QPushButton *closeGoogleCal;
    QLabel *Instructions;
    QWidget *topPanel;
    QLabel *Title;
    QPushButton *pushButton;

    void setupUi(QDialog *GoogleCal)
    {
        if (GoogleCal->objectName().isEmpty())
            GoogleCal->setObjectName(QStringLiteral("GoogleCal"));
        GoogleCal->setEnabled(true);
        GoogleCal->resize(2211, 1279);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(GoogleCal->sizePolicy().hasHeightForWidth());
        GoogleCal->setSizePolicy(sizePolicy);
        GoogleCal->setMinimumSize(QSize(1000, 1204));
        GoogleCal->setMaximumSize(QSize(10000, 10000));
        GoogleCal->setBaseSize(QSize(50, 0));
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/graylogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        GoogleCal->setWindowIcon(icon);
        GoogleCal->setStyleSheet(QLatin1String("#GoogleCal{\n"
"background: #c3c3c3;\n"
"border-image:url(:/images/finalBackground.jpg)\n"
"}\n"
"\n"
"QPushButton, QMenuButton, QStatusBar, QTextEdit, QLabel{\n"
"font-family: \"Roboto Black\";\n"
"font-size: 42px;\n"
"}\n"
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
        GoogleCal->setModal(false);
        content = new QWidget(GoogleCal);
        content->setObjectName(QStringLiteral("content"));
        content->setGeometry(QRect(70, 300, 2031, 841));
        content->setMinimumSize(QSize(1029, 131));
        content->setStyleSheet(QLatin1String("#content{\n"
"background-color: white;\n"
"}"));
        closeGoogleCal = new QPushButton(content);
        closeGoogleCal->setObjectName(QStringLiteral("closeGoogleCal"));
        closeGoogleCal->setGeometry(QRect(-249, 474, 150, 61));
        sizePolicy.setHeightForWidth(closeGoogleCal->sizePolicy().hasHeightForWidth());
        closeGoogleCal->setSizePolicy(sizePolicy);
        closeGoogleCal->setMinimumSize(QSize(150, 61));
        Instructions = new QLabel(content);
        Instructions->setObjectName(QStringLiteral("Instructions"));
        Instructions->setGeometry(QRect(10, -60, 1951, 891));
        Instructions->setMinimumSize(QSize(1281, 541));
        topPanel = new QWidget(GoogleCal);
        topPanel->setObjectName(QStringLiteral("topPanel"));
        topPanel->setGeometry(QRect(0, 0, 2211, 131));
        topPanel->setMinimumSize(QSize(2211, 131));
        topPanel->setStyleSheet(QLatin1String("#topPanel{\n"
"border-image:url(:/images/instructionsHeader.png)\n"
"}"));
        Title = new QLabel(GoogleCal);
        Title->setObjectName(QStringLiteral("Title"));
        Title->setGeometry(QRect(390, 150, 1421, 91));
        Title->setStyleSheet(QLatin1String("#Title{\n"
"font-size: 52px;\n"
"font-weight: bold;\n"
"}"));
        pushButton = new QPushButton(GoogleCal);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(1940, 1180, 161, 61));
        pushButton->setMinimumSize(QSize(0, 61));

        retranslateUi(GoogleCal);

        QMetaObject::connectSlotsByName(GoogleCal);
    } // setupUi

    void retranslateUi(QDialog *GoogleCal)
    {
        GoogleCal->setWindowTitle(QApplication::translate("GoogleCal", "Import To Calendar", nullptr));
        closeGoogleCal->setText(QApplication::translate("GoogleCal", "Close", nullptr));
        Instructions->setText(QApplication::translate("GoogleCal", "\n"
"Step 1 - Save your Sway schedule as a .csv file \n"
"\n"
"Step 2 - Login to your Google Calendar in a web browser\n"
"\n"
"Step 3 - At the top right of your Google Calendar, click the settings button (looks like a gear) -> Settings\n"
"\n"
"Step 4 - On the left, click \"Import & Export\" (make sure you are in Import)\n"
"\n"
"Step 5 - Click the \"Select file from your computer button\" and select your Sway schedule\n"
"\n"
"Step 6 - Select the calendar that you want you want your Sway schedule to be a part of\n"
"\n"
"Step 7 - Click \"Import\"\n"
"\n"
"Yay! Your Sway scheduled tasks are now in your google calendar :)\n"
"", nullptr));
        Title->setText(QApplication::translate("GoogleCal", "How To Import Your Sway Schedule To Google Calendar", nullptr));
        pushButton->setText(QApplication::translate("GoogleCal", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GoogleCal: public Ui_GoogleCal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GOOGLECAL_H
