#include <iostream>
using namespace std;

void printMax(int A[5]);

int main()
{
    int A1[5]= {25, 20, 40, 15, 5};
    int A2[5]= {15, 11, 23, 29, 32};

    printMax(A1);
    printMax(A2);
}

void printMax(int A[5])
{

    int max= A[0];

    for(int i=0; i<5; i++)
    {
        if(max<A[i])
        {
            max=A[i];
        
        }
    }

    cout<<"Maximum element is:"<< max<<'\n';
}