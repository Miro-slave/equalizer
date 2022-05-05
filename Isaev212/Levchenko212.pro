QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    mainwindow.cpp \
    notsaved.cpp \
    output_signal.cpp \
    saved.cpp \
    saved_settings.cpp

HEADERS += \
    mainwindow.h \
    notsaved.h \
    output_signal.h \
    saved.h \
    saved_settings.h

FORMS += \
    mainwindow.ui \
    notsaved.ui \
    output_signal.ui \
    saved.ui \
    saved_settings.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    res.qrc \
    res.qrc \
    res.qrc \
    res.qrc \
    resources.qrc
