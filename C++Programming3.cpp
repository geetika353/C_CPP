/* Program to check whether the number is Palindrome or not */

#include <iostream>
using namespace std;

int main()
{
    int n, r, sum=0 , temp;

    cout<<"Enter the number: "<<endl;
    cin>> n;

    temp= n;

    while(n>0)
    {
        r= n % 10;

        sum =(sum*10) + r;
        n= n/10;
    }
    if (temp == sum)

    {
         cout<<"Number is Pallindrome."<<endl;

    }

    else

    cout<<"Number is not Pallindrome."<<endl;

    return 0;
    
}