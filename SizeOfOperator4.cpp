#include <iostream>
using namespace std;

void fun(int A[])
{
     
     cout<<"Size of array is  "<<sizeof(A)<< endl;

}

int main()
{
    int A[]= {10,20,30,40,50};
    fun(A);

    return 0;
}