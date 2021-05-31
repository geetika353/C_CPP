/* Program to find the sum of the digits of a number */

#include <iostream>
using namespace std;

int main()
{
    int n, sum=0 , m;

    cout<<"Enter the number: "<<endl;
    cin>> n;

    while(n>0)
    {
        m = n % 10;

        sum = m + sum;

        n = n/10;
    }

    cout<<" Sum is "<< sum<<endl;

    return 0;
}