#include <iostream>
using namespace std;

class Account
{
    public:

    float Salary= 82000;

};

class Programmer: public Account
{
    public:

    float bonus= 30000;
};

int main(void)
{
    Programmer p1;

    cout<<"Salary: "<<p1.Salary<<endl;

    cout<<"Bonus: "<<p1.bonus<<endl;

    return 0;
}