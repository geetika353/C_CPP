#include <iostream>
using namespace std;

class A
{
    public:

    int x;

    A(int a) //Parameterised constructor
    {
        x=a;
    }

    A(A &i) //copy Constructor
    {
        x=i.x;

    }
};

int main()
{
    A a1(300); // Calling copy constructor

    A a2(70);

    cout<<a1.x;
 

    return 0;
}