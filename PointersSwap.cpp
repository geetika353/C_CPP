#include <iostream>
using namespace std;

int main()
{
    int a= 20, b= 10;

    int *p1= &a, *p2= &b;

    cout<<"Before Swap: *p1= "<<*p1<<endl;
    cout<<"Before Swap: *p2= "<<*p2<<endl;

    *p1=*p1 + *p2;

    *p2= *p1 - *p2;

    *p1= *p1 - *p2;


    cout<<"After Swap: *p1= "<<*p1<<endl;
    cout<<"After Swap: *p2= "<<*p2<<endl;

    return 0;



}