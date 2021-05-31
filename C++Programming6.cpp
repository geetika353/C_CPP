/* Program to check whether the number is Armstrong */

#include <iostream>
using namespace std;

int main()
{
    int n, r , sum= 0, temp;

    cout<<"Enter the number: ";
    cin>> n;

    temp =n;

    while(n>0)
    {
        r = n % 10;

        sum = sum + (r*r*r);

        n = n/10;
    }

    if(temp == sum)
    cout<<"It is an Armstrong Number."<<endl;

    else
    cout<<"It is not an Armstrong Number."<<endl;

    return 0;
}