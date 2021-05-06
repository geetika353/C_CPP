#include<iostream>

void printArray(int A[5]);
using namespace std;

int main()
{
    int A1[5]={10,20,30,40,50};

    int A2[5]={5,15,20,25,30};

    printArray(A1);
    printArray(A2);
}


void printArray(int A[5])
{

    cout<<"Printing the array elements:"<<endl;

    for(int i=0;i<5;i++)
    { 
        cout<<A[i]<<'\n';
    }
}