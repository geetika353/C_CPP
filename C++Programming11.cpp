/* Program for matrix multiplication */

#include <iostream>
using namespace std;

int main()
{
    int a[10][10] , b[10][10], mul[10][10], r , c , i , j, k;

    cout<<"Enter the number of rows: "<<endl;
    cin>>r;

    cout<<"Enter the number of columns: "<<endl;
    cin>>c;

    cout<<"Enter the elements of the first matrix: ";

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Enter the elements of the second matrix: ";

    for(i =0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            cin>>b[i][j];
        }
    }

    cout<<"Multiply both the marices:";

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
        {
            mul[i][j]=0;

            for(k=0; k<c; k++)
            {
                mul[i][j] += a[i][k]* b[k][j];
            }
        }
    }

    //Print the final result

    for(i=0; i<r; i++)
    {
        for(j=0; j<0; j++)
        {
            cout<<mul[i][j]<<"  ";
        }

        cout<<"\n";
    }

    return 0;
}