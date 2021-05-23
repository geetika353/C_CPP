#include <iostream>
using namespace std;

class Test
{
    private:

    int num;

    public:

    Test(): num(15){}

    void operator++()
    {
        num=num+2;
    }

    void print()
    {
        cout<<"The count is:"<<num<<endl;
    }
};

int main()
{
    Test tt;
    ++tt; // calling a function - operator++()

    tt.print();

    return 0;
}