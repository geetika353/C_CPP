#include<iostream>

using namespace std;

int main()
{
    int A1[5]={10,20,30,40,50};

    int A2[5]={5,15,20,25,30};

    printArray(a1);
    printArray(a2);
}


void printArray(int a[5])
{

    cout<<"Printing the array elements:"<<endl;

    for(int i=0;i<5;i++)
    { 
        cout<<a[i];<<'\n';
    }
}