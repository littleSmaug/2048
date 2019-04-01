
#include "functions.h"

using namespace std;


QVector<int> swap(int &x0,int &x1)
{
    QVector<int> temp(3);
    if(x1==x0)
    {
        x1+=x0;
        x0=0;
        temp[2]=1;
    }
    temp[0]= x0;
    temp[1]= x1;
    return temp;
}

QVector<int> moveleft(QVector<int> &x)
{

    for(int i=0;i<4;++i)
    {
        if(x[i]==0)
        {
            x.erase(x.begin()+i);
            x.push_back(0);
        }
    }
    for(int i=0;i<3;++i) //діє з права на ліво. або знизу вверх
    {
        QVector<int> temp(3);
        temp=swap(x[i],x[i+1]);
        x[i+1]=temp[1];
        x[i]=temp[0];
        if(temp[2]==1)
        {
            ++i;
        }

    }
    for(int i=0;i<4;++i)
    {
        if(x[i]==0)
        {
            x.erase(x.begin()+i);
            x.push_back(0);
        }
    }
    return x;
}

QVector<int> reverse(QVector<int> &x)
{
    QVector<int> temp(4);
    for(int i=0;i<4;++i)
    {
        temp[i]=x[3-i];
    }
    return temp;
}
bool ischangedfunc(QVector<int> &check, QVector<int> &temp, bool ischanged)
{
    if(ischanged !=true) // власне, цикл перевірки зміни. потрібне для рандомайзера
    {
        for(int m=0;m<4;++m)
        {
            if(check[m]!= temp[m])
            {
                ischanged=true;
                break;
            }
        }
    }
    return ischanged;
}

