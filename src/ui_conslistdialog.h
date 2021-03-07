/********************************************************************************
** Form generated from reading UI file 'conslistdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSLISTDIALOG_H
#define UI_CONSLISTDIALOG_H

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

class Ui_ConsListDialog
{
public:
    QWidget *Content;
    QLabel *label;
    QListWidget *listWidget;
    QWidget *topPanel;
    QPushButton *pushButton;
    QPushButton *removeConstraintButton;
    QSpinBox *input_removeConstraintCount;
    QLabel *removeConstraintLabel;

    void setupUi(QDialog *ConsListDialog)
    {
        if (ConsListDialog->objectName().isEmpty())
            ConsListDialog->setObjectName(QStringLiteral("ConsListDialog"));
        ConsListDialog->setEnabled(true);
        ConsListDialog->resize(1108, 1189);
        ConsListDialog->setMinimumSize(QSize(1108, 1013));
        QFont font;
        font.setPointSize(17);
        ConsListDialog->setFont(font);
        QIcon icon;
        icon.addFile(QStringLiteral(":/images/graylogo.png"), QSize(), QIcon::Normal, QIcon::Off);
        ConsListDialog->setWindowIcon(icon);
        ConsListDialog->setStyleSheet(QLatin1String("#ConsListDialog{\n"
"background: #c3c3c3;\n"
"border-image:url(:/images/finalBackground.jpg)\n"
"}\n"
"\n"
"QLabel, QListWidget, QPushButton{\n"
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
""));
        Content = new QWidget(ConsListDialog);
        Content->setObjectName(QStringLiteral("Content"));
        Content->setGeometry(QRect(70, 140, 961, 831));
        label = new QLabel(Content);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(240, 20, 481, 61));
        label->setStyleSheet(QLatin1String("QLabel{\n"
"font-weight: bold;\n"
"font-size: 52px;\n"
"}"));
        listWidget = new QListWidget(Content);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 100, 941, 701));
        listWidget->setMinimumSize(QSize(941, 701));
        topPanel = new QWidget(ConsListDialog);
        topPanel->setObjectName(QStringLiteral("topPanel"));
        topPanel->setGeometry(QRect(0, 0, 1108, 131));
        topPanel->setMinimumSize(QSize(1108, 131));
        topPanel->setStyleSheet(QLatin1String("#topPanel{\n"
"border-image:url(:/images/mainHeader.png)\n"
"}"));
        pushButton = new QPushButton(ConsListDialog);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(660, 1080, 131, 61));
        pushButton->setMinimumSize(QSize(0, 61));
        removeConstraintButton = new QPushButton(ConsListDialog);
        removeConstraintButton->setObjectName(QStringLiteral("removeConstraintButton"));
        removeConstraintButton->setGeometry(QRect(830, 1080, 191, 61));
        removeConstraintButton->setMinimumSize(QSize(191, 61));
        input_removeConstraintCount = new QSpinBox(ConsListDialog);
        input_removeConstraintCount->setObjectName(QStringLiteral("input_removeConstraintCount"));
        input_removeConstraintCount->setGeometry(QRect(830, 980, 191, 61));
        input_removeConstraintCount->setMinimumSize(QSize(191, 61));
        input_removeConstraintCount->setLayoutDirection(Qt::LeftToRight);
        input_removeConstraintCount->setStyleSheet(QLatin1String("#input_removeConstraintCount{\n"
"font-size:42px;\n"
"padding-right:5px;\n"
"}"));
        input_removeConstraintCount->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        input_removeConstraintCount->setMaximum(1);
        removeConstraintLabel = new QLabel(ConsListDialog);
        removeConstraintLabel->setObjectName(QStringLiteral("removeConstraintLabel"));
        removeConstraintLabel->setGeometry(QRect(80, 980, 751, 61));
        removeConstraintLabel->setStyleSheet(QLatin1String("#removeConstraintLabel{\n"
"font-size: 42px;\n"
"}"));

        retranslateUi(ConsListDialog);

        QMetaObject::connectSlotsByName(ConsListDialog);
    } // setupUi

    void retranslateUi(QDialog *ConsListDialog)
    {
        ConsListDialog->setWindowTitle(QApplication::translate("ConsListDialog", "Constraints", nullptr));
        label->setText(QApplication::translate("ConsListDialog", "List of Constraints", nullptr));
        pushButton->setText(QApplication::translate("ConsListDialog", "Back", nullptr));
        removeConstraintButton->setText(QApplication::translate("ConsListDialog", "Remove", nullptr));
        removeConstraintLabel->setText(QApplication::translate("ConsListDialog", "Select Constraint Number to Remove", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConsListDialog: public Ui_ConsListDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSLISTDIALOG_H
