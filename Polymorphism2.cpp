#include <iostream>
using namespace std;

int mul(int , int);
float mul(float , int);

int mul( int a, int b)
{
    return(a*b);
}

float mul(double x, int y)
{
    return(x*y);
}

int main()
{
    int r1=mul(52,89);
    int r2= mul(72.6,6);

    cout<<"Result1 is: "<<r1<<endl;
    cout<<"Result2 is: "<<r2<<endl;

    return 0;
}