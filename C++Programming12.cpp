#include <iostream>
using namespace std;

int main()
{
    int prod[10][10], r1, c1, r2, c2, i,j,k;

    int a[3][3]={{1,1,1}, {2,2,2}, {3,3,3}};
     int b[3][3]={{1,2,3},{1,2,3},{1,2,3}};

     cout<<"Enter the rows and columns of the first matrix: "<<endl;
     cin>>r1>>c1;

     cout<<"Enter the rows and columns of the second matrix: "<<endl;
     cin>>r2>>c2;

     if(c1!= r2)
     {
         cout<<"Column of the first matrix should be equal to the row of second matrix."<<endl;
     }

     else
     {
        

         for(i=0; i<r1; i++)
          {
              for(j=0; j<c2; j++)

              prod[i][j]= 0;
              cout<<endl;
          }

          for(i=0; i<r1; i++)
          {
              for(j=0; j<c2; j++)

              for(k=0; k<c1; k++)
              { 
                  prod[i][j]+= a[i][k]*b[k][j];
              }
          }  

          cout<<"The first matrix is: "<<endl;

         for(i=0; i<r1; i++)
         {
             for(j=0; j<c1; j++)

             cout<<a[i][j]<<"    ";
             cout<<endl;
         }

         cout<<"The second matrix is: "<<endl;

         for(i=0; i<r2; i++)
         {
             for(j=0; j<c2; j++)

             cout<<b[i][j]<<"   ";
             cout<<endl;
         }

              cout<<"Product of the matrices is: "<<endl;

              for(i=0; i<r1; i++)
              {
                  for(j=0; j<c2; j++)

                  cout<<prod[i][j]<<endl;
                  cout<<endl;
              }
          
           
     }
        
     
     
}