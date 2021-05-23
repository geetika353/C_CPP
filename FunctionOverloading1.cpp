#include <iostream>
using namespace std;

void func(int);
void func(int, int);

void func(int i)
{
    cout<<"Value of i is"<<i<<endl;
}

void func(int a, int b=9)
{
    cout<<"Value of a is:"<<a<<endl;
    cout<<"Value of b is:"<<b<<endl;
}

int main()
{
    func(50);

    return 0;
}