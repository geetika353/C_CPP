#include <iostream>
using namespace std;

void func(int);
void func(float);

void func(int i)
{
    cout<<"Value of i is:"<<i<< endl;

}

void func(float j)
{
    cout<<"Value of j is:"<<j<<endl;
}

int main()
{
    func(50);
    func(2.3);

    return 0;
}
