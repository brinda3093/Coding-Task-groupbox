QT += widgets

HEADERS       = window.h \
    customwindow.h
SOURCES       = window.cpp \
                main.cpp

# install
target.path = $$[QT_INSTALL_EXAMPLES]/widgets/widgets/groupbox
INSTALLS += target

CONFIG += console
