QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chatrecord.cpp \
    form.cpp \
    login.cpp \
    main.cpp \
    moments.cpp \
    newfriend.cpp \
    question_edit.cpp \
    register.cpp \
    settings.cpp \
    user.cpp \
    widget.cpp

HEADERS += \
    chatrecord.h \
    form.h \
    login.h \
    moments.h \
    newfriend.h \
    question_edit.h \
    register.h \
    settings.h \
    user.h \
    widget.h

FORMS += \
    chatrecord.ui \
    form.ui \
    login.ui \
    moments.ui \
    newfriend.ui \
    question_edit.ui \
    register.ui \
    settings.ui \
    user.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    back.qrc
