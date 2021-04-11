TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle


DEFINES += ZMQ_STATIC
#DEFINES += NZMQT_LIB
LIBS += -L$$PWD/../lib -lnzmqt -lzmqlib -lws2_32 -lIphlpapi
INCLUDEPATH += $$PWD/../include

SOURCES += main.cpp \
    bronseigenschappen.cpp \
    bronspack.cpp \
    coaches.cpp \
    goudeigenschappen.cpp \
    goudpack.cpp \
    pakket.cpp \
    spelers.cpp \
    stadiums.cpp \
    zilvereigenschappen.cpp \
    zilverpack.cpp

HEADERS += \
	$$PWD/../include/nzmqt/nzmqt.hpp \
	$$PWD/../include/nzmqt/global.hpp \
	$$PWD/../include/nzmqt/impl.hpp \
	bronseigenschappen.h \
	bronspack.h \
	coaches.h \
	goudeigenschappen.h \
	goudpack.h \
	pakket.h \
	spelers.h \
	stadiums.h \
	zilvereigenschappen.h \
	zilverpack.h
