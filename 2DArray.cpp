#include<iostream>
using namespace std;

int main()
{
    int T[3][3]; //Declaration of the Array

    T[0][1]=10;// Initialisation
    T[0][0]=15;
    T[1][0]=20;
    T[1][2]=25;
    T[2][1]=40;
    T[2][2]=30;


    // Traversal
    for(int i=0; i<3; ++i)
    {
        for(int j=0; j<3; ++j)
        {
            cout<<T[i][j]<<"  ";
        }

          cout<<"\n";
    }

    return 0;
}