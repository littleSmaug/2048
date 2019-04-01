#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <QVector>
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

QVector<int> moveleft(QVector<int> &x);
QVector<int> move(int &x0,int &x1);
QVector<int> reverse(QVector<int> &x);
bool ischangedfunc(QVector<int> &check, QVector<int> &temp, bool ischanged);


#endif // FUNCTIONS_H
