QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Sway
TEMPLATE = app

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    consinputdialog.cpp \
    conslistdialog.cpp \
    constraintentry.cpp \
    googlecal.cpp \
    inputcontroller.cpp \
    main.cpp \
    mainwindow.cpp \
    schedulecreator.cpp \
    scheduledtask.cpp \
    taskentry.cpp \
    taskinputdialog.cpp \
    tasklistdialog.cpp

HEADERS += \
    consinputdialog.h \
    conslistdialog.h \
    constraintentry.h \
    googlecal.h \
    inputcontroller.h \
    mainwindow.h \
    schedulecreator.h \
    scheduledtask.h \
    taskentry.h \
    taskinputdialog.h \
    tasklistdialog.h

FORMS += \
    consinputdialog.ui \
    conslistdialog.ui \
    googlecal.ui \
    mainwindow.ui \
    taskinputdialog.ui \
    tasklistdialog.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    backgroundsrc.qrc
