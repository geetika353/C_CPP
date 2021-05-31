/* Program to swap two numbers without using third Variable by '*' and '/' */

#include <iostream>
using namespace std;

int main()
{
    int a = 10, b = 50;

    cout<<"Before swap a = "<<a <<" and b = "<< b<<endl;

    a = a*b;
    b = a/b;
    a = a/b;

    cout<<"After swap a = "<<a<<" and b = "<<b<<endl;

    return 0;
}