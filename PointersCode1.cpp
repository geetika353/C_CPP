#include <iostream>
using namespace std;

int main()
{

    int num=30;

    int *p;
    p= &num;

    cout<<"Address of Number variable: "<<&num<<endl;
    cout<<"Address of p Variable: "<<p<<endl;
    cout<<"Value of p variable: "<< *p<<endl;

    return 0;
}