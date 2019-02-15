#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <vector>
#include <QVector>
#include <iostream>
#include <string>
using namespace std;

vector<int> moveleft(vector<int> x);
vector<int> move(int x0,int x1);
QVector<int> turn(QVector<int> x);
QVector<int> reverse(QVector<int> x);
QVector<int> randomize(QVector<int> temp);
string ischangedfunc(QVector<int> check, QVector<int> temp, string ischanged);


#endif // FUNCTIONS_H
