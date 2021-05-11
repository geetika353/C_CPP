#include <iostream>
using namespace std;

int main()
{
    int *ptr1=new int (10);

    cout<<"Size of ptr1:  "<<sizeof(ptr1)<<endl;
    cout<<"Size of *ptr1:  "<<sizeof(*ptr1)<<endl;

    char *ptr2= new char('A');

    cout<<"Size of ptr2:  "<<sizeof(ptr2)<<endl;
    cout<<"Size of *ptr2:  "<<sizeof(*ptr2)<<endl;

    double *ptr3= new double(12.78);

    cout<<"Size of ptr3:  "<<sizeof(ptr3)<<endl;
    cout<<"Size of *ptr3:  "<<sizeof(*ptr3)<<endl;

    return 0;
}