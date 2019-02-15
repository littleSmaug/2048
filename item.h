#ifndef ITEM_H
#define ITEM_H


class Item
{
public:
    Item();
    void setxcoordinate(int a);
    void setycoordinate(int a);
    //void setvalue(int a);
    void setvalueincrement(int a);
    int getxcoordinate();
    int getycoordinate();
    int getvalue();
    int getvalueincrement();
    Item operator+(Item a);
    void operator=(Item a);
    Item(int a);
    
  // визначаємо лише операцію додавання і присвоєння
  //а рухи будуть визначати лише порядок додавання ітемів, котре буде обмежено певними умовами.


private:
    int xcoordinate;
    int ycoordinate;
    //int value;
    int valueincrement;




};

#endif // ITEM_H
