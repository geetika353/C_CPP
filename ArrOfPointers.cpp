#include <iostream>
using namespace std;

int main()
{
    int *ptr; // integer pointer declaration

    int marks[10]; // marks array declaration

    cout<<"Enter the elements of the Array: "<<endl;

    for(int i=0; i<10;i++)
    {
        cin>>marks[i];
    }

    ptr=marks; // both marks and ptr pointing to same element

    cout<<"The value of *ptr is: "<<*ptr<<endl;
    cout<<"The value of *marks is:  "<<*marks<<endl;
}