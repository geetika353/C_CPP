#include <iostream>
using namespace std;

class A
{
    int x;

    public:

    A(){};

    A(int i)
    {
        x=i;
    }

    void operator+(A);
    void display();

};

void A :: operator+(A a)
{
    int m= x+a.x;

    cout<<"The result of addition of two obj is: "<<m<<endl;
}

int main()
{
    A a1(45);
    A a2(58);
    a1+ a2;

    return 0;
}