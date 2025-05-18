
QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = XboxAchievementUnlocker
TEMPLATE = app

SOURCES += main.cpp \
           MainWindow.cpp \
           AchievementPage.cpp \
           GamePage.cpp \
           SettingsPage.cpp

HEADERS += MainWindow.h \
           AchievementPage.h \
           GamePage.h \
           SettingsPage.h
