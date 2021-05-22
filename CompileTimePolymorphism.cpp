#include <iostream>
using namespace std;

class A
{
    int a;

    public:

    void display()
    {
        cout<<"Class A"<<endl;
    }
};

class B: public A
{
    int b;

    public:

    void display()
    {
        cout<<"Class B"<<endl;
    }
};

int main()
{
    B b;

    b.display();

    return 0;
}
