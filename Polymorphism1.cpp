#include <iostream>
using namespace std;

class Cal
{
    public:

    static int add(int a, int b)
    {
        return(a+b);
    }

    static int add(int a, int b, int c)
    {
        return(a+b+c);
    }
};

int main(void)
{
    Cal C;

    cout<<"First Result: "<<C.add(93,58)<<endl;
    cout<<"Second Result: "<<C.add(100, 852, 69);

    return 0;
}