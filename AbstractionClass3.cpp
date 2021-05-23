#include <iostream>
using namespace std;

class Sum
{
    private:

    int x, y, z;

    public:

    void add()
    {
        cout<<"Enter two numbers:"<<endl;
        cin>>x>>y;

        z= x + y;

        cout<<"Sum of x & y is: "<<z<<endl;
    }
};

int main()
{
    Sum s;

    s.add();

    return 0;
}