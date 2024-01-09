QT       += core gui printsupport
QT += charts
QT += core gui charts
QT += widgets core
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    Controller/controller.cc \
    Model/model.cc \
    View/creditWindow.cc \
    View/depositWindow.cc \
#    View/qcustomplot.cpp \
    qcustomplot.cpp \
    View/view.cc \
    main.cc \


HEADERS += \
    Controller/controller.h \
    Model/exprtk.hpp \
    Model/model.h \
#    View/qcustomplot.h \
    qcustomplot.h \
    Model/tokenizer.hpp \
    View/creditWindow.h \
    View/depositWindow.h \
    View/view.h \



FORMS += \
    View/creditWindow.ui \
    View/depositWindow.ui \
    View/view.ui \


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    Dockerfile \
#    Model/a.out \
#    Model/a.out.dSYM/Contents/Info.plist \
#    Model/a.out.dSYM/Contents/Resources/DWARF/a.out \
    readme.txt \
    run.sh
