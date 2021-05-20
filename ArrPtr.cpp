#include <iostream>
using namespace std;

int main()
{ 
    int size;// variable declaration
    int *arr = new int[size];// creating an array

    cout<<"Enter the size of the Array: ";
    cin>> size;

    cout<<"\n Enter the elements of the Array: ";

    for(int i=0; i<size; i++) // for loop
    {
        cin>>arr[i];
    }

    cout<<"\n The elements that are entered: ";

    for(int i=0; i<size; i++) // for loop
    {
        cout<<arr[i]<<",";
    }

    delete arr;// deleting the existing array
    return 0;

}