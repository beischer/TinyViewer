
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TinyViewer
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        mainwindow.h

# win32:RC_ICONS += am-app-icon.ico

release:DESTDIR = $$PWD/build/release
release:OBJECTS_DIR = $$PWD/build/release/.obj
release:MOC_DIR = $$PWD/build/release/.moc
release:RCC_DIR = $$PWD/build/release/.rcc
release:UI_DIR = $$PWD/build/release/.ui

debug:DESTDIR = $$PWD/build/debug
debug:OBJECTS_DIR = $$PWD/build/debug/.obj
debug:MOC_DIR = $$PWD/build/debug/.moc
debug:RCC_DIR = $$PWD/build/debug/.rcc
debug:UI_DIR = $$PWD/build/debug/.ui
