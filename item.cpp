#include "item.h"

Item::Item()
{

}
Item::Item(int a)
{
    xcoordinate=a;
    ycoordinate=a;
    valueincrement=a;
    //лише для нульового варіанту це все має сенс
}
void Item::setxcoordinate(int a)
{
    xcoordinate=a;
}
void Item::setycoordinate(int a)
{
    ycoordinate=a;
}
void Item::setvalueincrement(int a)
{
    valueincrement=a;
}
int Item::getxcoordinate()
{
    return xcoordinate;
}
int Item::getycoordinate()
{
    return ycoordinate;
}
int Item::getvalueincrement()
{
    return valueincrement;
}
int Item::getvalue()
{
    int a=2;
    for(int i=0;i<valueincrement;++i)
    {
        a*=2;
    }
    return a;
}
Item Item::operator+(Item a)
{
    Item b;
    int i=0;
    i=valueincrement+1;
    b.setxcoordinate(xcoordinate);
    b.setycoordinate(ycoordinate);
    b.setvalueincrement(i);
    return b;
}
void Item::operator=(Item a)
{
    xcoordinate=a.getxcoordinate();
    ycoordinate=a.getycoordinate();
    valueincrement=a.getvalueincrement();
}


