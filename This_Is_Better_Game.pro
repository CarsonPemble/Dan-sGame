TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS += -L/usr/lib/x86_64-linux-gnu -lncurses
#INCLUDEPATH += /usr/include

SOURCES += main.cpp \
    Item.cpp \
    Character.cpp \
    Screen.cpp \
    Map.cpp \
    Location.cpp

QMAKE_CXXFLAGS += -pedantic
QMAKE_CXXFLAGS += -pedantic-errors

QMAKE_CXXFLAGS += -Wmissing-include-dirs
QMAKE_CXXFLAGS += -Wfloat-equal
QMAKE_CXXFLAGS += -Wredundant-decls
QMAKE_CXXFLAGS += -Winit-self
QMAKE_CXXFLAGS += -Wshadow
QMAKE_CXXFLAGS += -Wconversion

HEADERS += \
    Item.h \
    Character.h \
    Screen.h \
    Map.h \
    Location.h

DISTFILES += \
    NewMap.txt

