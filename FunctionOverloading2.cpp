#include <iostream>
using namespace std;

void func(int);
void func(int &);

int main()
{
    int a=10;
    func(a);

    return 0;
}
void func(int x)
{
    cout<<"Value of x is: "<<x<< endl;

}

void func(int &b)
{
    cout<<"Value of b is: "<<b<<endl;
}