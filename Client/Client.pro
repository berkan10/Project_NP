TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

DEFINES += ZMQ_STATIC
#DEFINES += NZMQT_LIB
LIBS += -L$$PWD/../lib -lnzmqt -lzmqlib -lws2_32 -lIphlpapi
INCLUDEPATH += $$PWD/../include

SOURCES += \
    main.c
