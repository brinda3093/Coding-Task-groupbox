/**************************************
 * Class Custom Window
 *
 * September 16, 2019
 * ************************************/
#ifndef CUSTOMWINDOW_H
#define CUSTOMWINDOW_H

#include <QWidget>
#include<iostream>

QT_BEGIN_NAMESPACE

using namespace std;
QT_END_NAMESPACE

//! [0]
class CustomWindow : public QWidget
{
    Q_OBJECT

public:
    void printHello()
    {
        cout<<"Hello There!";
    }

};

#endif // CUSTOMWINDOW_H
