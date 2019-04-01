#ifndef WIDGET_H
#define WIDGET_H


#include <QtGui>
#include <QWidget>
#include <QVector>
#include <QKeyEvent>
#include "functions.h"
#include <string>
#include <time.h>
class Widget : public QWidget
{
    Q_OBJECT

public:



    QPaintEvent *pe;
    Widget(QWidget *parent = nullptr);
    ~Widget();

    protected:
    QVector<int> x;
    QVector<int> y;
    QVector<int> z;
    QVector<int> k;
    void reverseY(QVector<int>  temp, int j);
    QVector<int> y1(int j);
    bool actualturn(string key);
    void randomAll(bool ischanged);
    void startrandom();
    void random(int k);

    protected:
    virtual void paintEvent(QPaintEvent *pe);
    virtual void  keyPressEvent(QKeyEvent *event);

};

#endif // WIDGET_H
