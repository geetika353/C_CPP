//This program doesnot have virtual keyword

#include <iostream>
using namespace std;

class A
{
    int x=5;

    public:

    void display()
    {
        cout<<"Value of x is: "<<x<<endl;
    }
};

class B: public A
{
    int y= 20;

    public:

    void display()
    {
        cout<<"Value of y is: "<<y<<endl;
    }
};

int main()
{
    A *a;
    B b;
    
    a= &b;

    a->display();

    return 0;
}