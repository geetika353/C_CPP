#include<iostream>
using namespace std;

void Swap(int *x, int *y)
{
    int swap;

    swap=*x;
    *x=*y;
    *y=swap;

}

int main()
{
    int x=500;
    int y=100;

    Swap(&x, &y);

    cout<<"The value of x is "<<x<<endl;
     cout<<"The value of y is "<<y<<endl;

     return 0;


}
