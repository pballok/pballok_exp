TEMPLATE    = app
CONFIG      += c++11
INCLUDEPATH = ..
DESTDIR     = ..
HEADERS     = ../shared_test.h
SOURCES     = main.cpp
LIBS        = -L.. -lshared_test_A -lshared_test_B
