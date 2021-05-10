#include <iostream>
using namespace std;

class Base
{
    int a;

    int b;

    char ch;
};

int main()
{
    Base b;

    cout<<"Size of class Base is:  "<< sizeof(b);

    return 0;
}