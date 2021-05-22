#include <iostream>
using namespace std;

class Shape
{
    public:

    virtual void draw()
    {
        cout<<"Drawing1"<<endl;
    }
};

class Rectangle: public Shape
{
    public:

    void draw()
    {
        cout<<"Drawing Rectangle!"<<endl;
    }
};

class Circle: public Shape
{
    public:

    void draw()
    {
        cout<<"Drawing Circle!"<<endl;
    }
};

int main(void)
{
    Shape *s;
    Shape sh;

    Rectangle rec;
    Circle cir;

    s= &sh;
    s->draw();

    s=&rec;
    s->draw();

    s=&cir;
    s->draw();

    return 0;

}