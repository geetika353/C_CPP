#include <iostream>
using namespace std;

void printMin(int A[5]);


int main()
{
    int A1[5]={30,20, 10,40,60};
    int A2[5]={10, 15, 5, 20, 35};

    printMin(A1);
    printMin(A2);
}    

void printMin(int A[5])
{
    int min=A[0];

    for(int i=0; i<5; i++)

    {
        if(min>A[i])
        {
            min=A[i];
        }
    }

    cout<<"Minimum element is:"<<min<<'\n';
}