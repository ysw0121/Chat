QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    answer.cpp \
    chatrecord.cpp \
    exercise.cpp \
    form.cpp \
    formalquiz.cpp \
    game_login.cpp \
    game_register.cpp \
    like_and_comment.cpp \
    login.cpp \
    main.cpp \
    mainwindow.cpp \
    model_choose.cpp \
    moments.cpp \
    newfriend.cpp \
    question_edit.cpp \
    rank.cpp \
    register.cpp \
    settings.cpp \
    user.cpp \
    widget.cpp

HEADERS += \
    answer.h \
    chatrecord.h \
    exercise.h \
    form.h \
    formalquiz.h \
    game_login.h \
    game_register.h \
    like_and_comment.h \
    login.h \
    mainwindow.h \
    model_choose.h \
    moments.h \
    newfriend.h \
    question_edit.h \
    rank.h \
    register.h \
    settings.h \
    user.h \
    user_info.h \
    widget.h

FORMS += \
    answer.ui \
    chatrecord.ui \
    exercise.ui \
    form.ui \
    formalquiz.ui \
    game_login.ui \
    game_register.ui \
    like_and_comment.ui \
    login.ui \
    mainwindow.ui \
    model_choose.ui \
    moments.ui \
    newfriend.ui \
    question_edit.ui \
    rank.ui \
    register.ui \
    settings.ui \
    user.ui \
    widget.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
    Resource.qrc \
    back.qrc
