/* Program to find the factorial of a number using recursion */

#include <iostream>
using namespace std;

int main()
{
    int factorial(int);
    int fact, value;

    cout<<"Enter any value: ";
    cin>>value;

    fact = factorial(value);

    cout<<"Factorial of a number is: "<<fact<<endl;

    return 0;
}

int factorial( int n)
{
    if(n<0)
    return(-1); // wrong value

    if(n==0)
    return(1);

    else
    {
        return(n * factorial(n-1));
    }
}