
#include "functions.h"

using namespace std;


vector<int> move(int x0,int x1)
{
    vector<int> temp(3);
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

vector<int> moveleft(vector<int> x)
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

        vector<int> temp(3);

        temp=move(x[i],x[i+1]);

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

QVector<int> turn(QVector<int> x)
{
    vector<int> temp(4);
    //temp=x.toStdVector();
    for(int i=0;i<4;++i)
    {
        temp[i]=x[i];
    }
    temp= moveleft(temp);
    for(int i=0;i<4;++i)
    {

        x[i]=temp[i];
    }
    //x.fromStdVector(temp);
    return x;
}
QVector<int> reverse(QVector<int> x)
{
    QVector<int> temp(4);
    for(int i=0;i<4;++i)
    {
        temp[i]=x[3-i];
    }
    return temp;
}

QVector<int> randomize(QVector<int> temp)
{
    int j=0;
    j=rand()%2;
    int c=0;
    for(int i=0;i<4;++i)
    {
        if(j==0)
            break;

        int m=0;
        m=rand()%20;


        if(temp[i]==0)
        {
            switch(m)
            {
            case 0:
                break;
            case 1:
                temp[i]=2;
                c++;
                break;
            case 2:
                break;
            case 3:
                temp[i]=2;
                c++;
                break;
            case 4:
                temp[i]=2;
                c++;
                break;
            case 5:
                temp[i]=4;
                c++;
                break;
            }
        }
        if(c==j)
            break;
    }
    return temp;
}
string ischangedfunc(QVector<int> check,QVector<int> temp,string ischanged)
{
    if(ischanged !="true") // власне, цикл перевірки зміни. потрібне для рандомайзера
    {
        for(int m=0;m<4;++m)
        {
            if(check[m]!= temp[m])
            {
                ischanged="true";
                break;
            }
        }
    }
    return ischanged;
}

