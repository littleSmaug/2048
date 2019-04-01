#include "widget.h"
using namespace std;

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setFixedSize(400,400);
    x.resize(4);
    y.resize(4);
    z.resize(4);
    k.resize(4);
    startrandom();

}

Widget::~Widget()
{

}



void Widget::paintEvent(QPaintEvent *pe)
{

    QPainter desk(this);
    desk.setBrush(QColor(Qt::black));
    desk.drawRect(0,0,400,400);
    int n=100; // розмір вікна 400на 400. 100 на 100- 1шматок поля, де малюватимуться штуки

    // інакше кажучи, перший параметр це початок малювання по x,
    //другий по y, третій довжина по х, четвертий довжина по у.

    QImage number2;
    QImage number4;
    QImage number8;
    QImage number16;
    QImage number32;
    QImage number64;
    QImage number128;
    QImage number256;
    QImage number512;
    QImage number1024;
    QImage number2048;

    number2.load("2.png");
    number4.load("4.png");
    number8.load("8.png");
    number16.load("16.png");
    number32.load("32.png");
    number64.load("64.png");
    number128.load("128.png");
    number256.load("256.png");
    number512.load("512.png");
    number1024.load("1024.png");
    number2048.load("2048.png");

    for(int i=0;i<4;++i)
    {
        switch(x[i])
        {
        case 2:
            desk.drawImage(QRect(i*n,0,n,n),number2);
            break;
        case 4:
            desk.drawImage(QRect(i*n,0,n,n),number4);
            break;
        case 8:
            desk.drawImage(QRect(i*n,0,n,n),number8);
            break;
        case 16:
            desk.drawImage(QRect(i*n,0,n,n),number16);
            break;
        case 32:
            desk.drawImage(QRect(i*n,0,n,n),number32);
            break;
        case 64:
            desk.drawImage(QRect(i*n,0,n,n),number64);
            break;
        case 128:
            desk.drawImage(QRect(i*n,0,n,n),number128);
            break;
        case 256:
            desk.drawImage(QRect(i*n,0,n,n),number256);
            break;
        case 512:
            desk.drawImage(QRect(i*n,0,n,n),number512);
            break;
        case 1024:
            desk.drawImage(QRect(i*n,0,n,n),number1024);
            break;
        case 2048:
            desk.drawImage(QRect(i*n,0,n,n),number2048);
            break;
        }
        switch(y[i])
        {
        case 2:
            desk.drawImage(QRect(i*n,n,n,n),number2);
            break;
        case 4:
            desk.drawImage(QRect(i*n,n,n,n),number4);
            break;
        case 8:
            desk.drawImage(QRect(i*n,n,n,n),number8);
            break;
        case 16:
            desk.drawImage(QRect(i*n,n,n,n),number16);
            break;
        case 32:
            desk.drawImage(QRect(i*n,n,n,n),number32);
            break;
        case 64:
            desk.drawImage(QRect(i*n,n,n,n),number64);
            break;
        case 128:
            desk.drawImage(QRect(i*n,n,n,n),number128);
            break;
        case 256:
            desk.drawImage(QRect(i*n,n,n,n),number256);
            break;
        case 512:
            desk.drawImage(QRect(i*n,n,n,n),number512);
            break;
        case 1024:
            desk.drawImage(QRect(i*n,n,n,n),number1024);
            break;
        case 2048:
            desk.drawImage(QRect(i*n,n,n,n),number2048);
            break;
        }
        switch(z[i])
        {
        case 2:
            desk.drawImage(QRect(i*n,2*n,n,n),number2);
            break;
        case 4:
            desk.drawImage(QRect(i*n,2*n,n,n),number4);
            break;
        case 8:
            desk.drawImage(QRect(i*n,2*n,n,n),number8);
            break;
        case 16:
            desk.drawImage(QRect(i*n,2*n,n,n),number16);
            break;
        case 32:
            desk.drawImage(QRect(i*n,2*n,n,n),number32);
            break;
        case 64:
            desk.drawImage(QRect(i*n,2*n,n,n),number64);
            break;
        case 128:
            desk.drawImage(QRect(i*n,2*n,n,n),number128);
            break;
        case 256:
            desk.drawImage(QRect(i*n,2*n,n,n),number256);
            break;
        case 512:
            desk.drawImage(QRect(i*n,2*n,n,n),number512);
            break;
        case 1024:
            desk.drawImage(QRect(i*n,2*n,n,n),number1024);
            break;
        case 2048:
            desk.drawImage(QRect(i*n,2*n,n,n),number2048);
            break;
        }
        switch(k[i])
        {
        case 2:
            desk.drawImage(QRect(i*n,3*n,n,n),number2);
            break;
        case 4:
            desk.drawImage(QRect(i*n,3*n,n,n),number4);
            break;
        case 8:
            desk.drawImage(QRect(i*n,3*n,n,n),number8);
            break;
        case 16:
            desk.drawImage(QRect(i*n,3*n,n,n),number16);
            break;
        case 32:
            desk.drawImage(QRect(i*n,3*n,n,n),number32);
            break;
        case 64:
            desk.drawImage(QRect(i*n,3*n,n,n),number64);
            break;
        case 128:
            desk.drawImage(QRect(i*n,3*n,n,n),number128);
            break;
        case 256:
            desk.drawImage(QRect(i*n,3*n,n,n),number256);
            break;
        case 512:
            desk.drawImage(QRect(i*n,3*n,n,n),number512);
            break;
        case 1024:
            desk.drawImage(QRect(i*n,3*n,n,n),number1024);
            break;
        case 2048:
            desk.drawImage(QRect(i*n,3*n,n,n),number2048);
            break;
        }

    }
}
void Widget::keyPressEvent(QKeyEvent *event)
{
    bool ischanged=false;

    if(event->key()==Qt::Key_Up)
    {
       ischanged=actualturn("UP");
       if(ischanged==true)
           random(1);
        update();
    }

    if(event->key()==Qt::Key_Down)
    {
        ischanged=actualturn("DOWN");
        if(ischanged==true)
            random(1);
        update();
    }
    if(event->key()==Qt::Key_Left)
    {
        ischanged=actualturn("LEFT");
        if(ischanged==true)
            random(1);
        update();

    }
    if(event->key()==Qt::Key_Right)
    {
        ischanged=actualturn("RIGHT");
        if(ischanged==true)
            random(1);
        update();
    }
    update();
}

void Widget::reverseY(QVector<int>  temp,int j) // повертає із стовпчика значення назад  у вектори рядків.
{
    x[j]=temp[0];
    y[j]=temp[1];
    z[j]=temp[2];
    k[j]=temp[3];
}
QVector<int> Widget::y1( int j) //j- номер стовпчика . формує стовпчик із векторів рядків.
{
    QVector<int> temp(4);
    temp[0]=x[j];
    temp[1]=y[j];
    temp[2]=z[j];
    temp[3]=k[j];
    return temp;
}
bool Widget::actualturn(string key)
{
    int j=0;
    if(key=="UP")
    {
       j=1;
    }
    else if (key=="DOWN")
    {
       j=2;
    }
    else if (key=="LEFT")
    {
       j=3;
    }
    else if (key=="RIGHT")
    {
       j=4;
    }

    QVector<int> temp(4); // задаємо тимчасовий вектор
    QVector<int> check(4); // задаємо тимчасовий вектор
    bool ischanged=false;


    switch(j)
    {
    case 1:
        for(int i=0;i<4;++i)
        {
            temp=y1(i);           // передаємо в нього значення першого стовпчика
            check=y1(i);          //визначаємо вектоор для перевірки, чи була зроблена хоч 1 зміна
            temp=moveleft(temp);      // робимо хід для даного стовпчика
            if(ischanged !=true)
                ischanged= ischangedfunc(check,temp,ischanged); //перевірка зміни для рандомайзера
            reverseY(temp,i);     // повертаємо значення в рядки
            temp.fill(0);
            check.fill(0);
        }
        break;
    case 2:
        for(int i=0;i<4;++i)
        {
            temp=y1(i);             // передаємо в нього значення першого стовпчика
            check=y1(i);          //визначаємо вектоор для перевірки, чи була зроблена хоч 1 зміна
            temp=reverse(temp);     // перевертаємо його, заради коректної роботи turn
            temp=moveleft(temp);        // хід
            temp=reverse(temp);     // перевертаємо назад
            if(ischanged !=true)
                ischanged= ischangedfunc(check,temp,ischanged); //перевірка зміни для рандомайзера
            reverseY(temp,i);       //передаємо значення назад в вектори рядків
            temp.fill(0);
            check.fill(0);
        }
        break;
    case 3:
        //для першого стовпчика хід
        temp=x;                     // передаємо рядок в тимчасовий вектор
        check=x;                    //визначаємо вектоор для перевірки, чи була зроблена хоч 1 зміна
        temp=moveleft(temp);            // хід
        if(ischanged !=true)
            ischanged= ischangedfunc(check,temp,ischanged); //перевірка зміни для рандомайзера
        x=temp;                     // передаємо значення назад в рядок

        //для другого стовпчика хід
        temp.fill(0);
        check.fill(0);
        check=y;
        temp=y;
        temp=moveleft(temp);
        if(ischanged !=true)
            ischanged= ischangedfunc(check,temp,ischanged); //перевірка зміни для рандомайзера
        y=temp;

        //для третього стовпчика хід
        temp.fill(0);
        check.fill(0);
        temp=z;
        check=z;
        temp=moveleft(temp);
        if(ischanged !=true)
            ischanged= ischangedfunc(check,temp,ischanged); //перевірка зміни для рандомайзера
        z=temp;

        //для четвертого стовпчика хід
        temp.fill(0);
        check.fill(0);
        temp=k;
        check=k;
        temp=moveleft(temp);
        if(ischanged !=true)
            ischanged= ischangedfunc(check,temp,ischanged); //перевірка зміни для рандомайзера
        k=temp;
        break;
    case 4:
        //для першого стовпчика хід
        temp=x;                     // передаємо рядок в тимчасовий вектор
        check=x;
        temp=reverse(temp);         // перевертаємо його, заради коректної роботи turn
        temp=moveleft(temp);            // хід
        temp=reverse(temp);         // перевертаємо назад
        if(ischanged !=true)
            ischanged= ischangedfunc(check,temp,ischanged); //перевірка зміни для рандомайзера
        x=temp;                     // передаємо значення назад в рядок

        //для другого стовпчика хід
        temp.fill(0);
        check.fill(0);
        temp=y;
        check=y;
        temp=reverse(temp);
        temp=moveleft(temp);
        temp=reverse(temp);
        if(ischanged !=true)
            ischanged= ischangedfunc(check,temp,ischanged); //перевірка зміни для рандомайзера
        y=temp;

        //для третього стовпчика хід
        temp.fill(0);
        check.fill(0);
        temp=z;
        check=z;
        temp=reverse(temp);
        temp=moveleft(temp);
        temp=reverse(temp);
        if(ischanged !=true)
            ischanged= ischangedfunc(check,temp,ischanged); //перевірка зміни для рандомайзера
        z=temp;

        //для четвертого стовпчика хід
        temp.fill(0);
        check.fill(0);
        temp=k;
        check=k;
        temp=reverse(temp);
        temp=moveleft(temp);
        temp=reverse(temp);
        if(ischanged !=true)
            ischanged= ischangedfunc(check,temp,ischanged); //перевірка зміни для рандомайзера
        k=temp;
        break;
    }
    return ischanged;
}
void Widget::startrandom()
{

    bool notempty=true;
    for(int j=0;j<4;++j)
    {
        if(x[j]!=0)
        {
            notempty=false;
            break;
        }

        if(y[j]!=0)
        {
            notempty=false;
            break;
        }
        if(z[j]!=0)
        {
            notempty=false;
            break;
        }
        if(k[j]!=0)
        {
            notempty=false;
            break;
        }
    }
    if(notempty==true)
        random(3);
}
void Widget::random(int q)
{
    int empty=0;
    for(int j=0;j<4;++j)
    {
        if(x[j]==0)
        {
            empty++;
        }

        if(y[j]==0)
        {
            empty++;
        }
        if(z[j]==0)
        {
            empty++;
        }
        if(k[j]==0)
        {
            empty++;
        }
    }
    if(empty>2)
    {
        int c=0;
        srand(time(nullptr));
        while(c!=q)
        {
            int j=0;

            j=rand()%15;
            int i=0;
            if(j<4&&x[j]==0)
            {
                i=rand()%4;
                if(i==1)
                    x[j]=4;
                else
                    x[j]=2;
                c++;
            }
            if(j>3&&j<8&&y[j-3]==0)
            {
                int i=0;
                i=rand()%4;
                if(i==1)
                    y[j-3]=4;
                else
                    y[j-3]=2;
                c++;
            }
            if(j>7&&j<12&&z[j-7]==0)
            {
                int i=0;
                i=rand()%4;
                if(i==1)
                    z[j-7]=4;
                else
                    z[j-7]=2;
                c++;
            }
            if(j>11&&j<16&&k[j-11]==0)
            {
                int i=0;
                i=rand()%4;
                if(i==1)
                    k[j-11]=4;
                else
                    k[j-11]=2;
                c++;
            }
        }
    }
    else if (empty==2||empty==1)
    {
        for(int r=0;r<4;++r)
        {
            if(x[r]==0)
            {
                x[r]=2;
                break;
            }
            if(y[r]==0)
            {
                y[r]=2;
                break;
            }
            if(z[r]==0)
            {
                z[r]=2;
                break;
            }
            if(k[r]==0)
            {
                k[r]=2;
                break;
            }
        }
    }
}


