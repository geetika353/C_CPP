#include <iostream>
using namespace std;

class Demo
{
    int a;
    int b;
    int *p;

    public:

    Demo()
    {
        p = new int;
    }

    void setdata(int x, int y, int z)
    {
        a=x;
        b=y;
        *p=z;
    }

    void showdata()
    {
        cout<<"Value of a is: "<<a<<endl;
        cout<<"Value of b is: "<<b<<endl;
        cout<<"Value of *p is: "<<*p<<endl;
    }

};

int main()
{
    Demo d1;

    d1.setdata(5,9,7);

    Demo d2 = d1;
    d2.showdata();

    return 0;
}