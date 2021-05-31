/* Program for User Defined Exceptions */

#include <iostream>
#include <iostream>

using namespace std;

class MyException : public exception
{

    public:

    const char* what() const throw()
    {
        return("Attempted to divide by zero!\n");
    }
};

int main()

{
    try
    {
        int x, y;

        cout<<"Enter two numbers: \n";
        cin>>x>>y;

        if(y==0)
        {
            MyException z;

            throw z;
        }

        else
        {
            cout<<"x/y ="<<x/y<<endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}