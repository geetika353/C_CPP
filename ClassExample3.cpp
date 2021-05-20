#include <iostream>
using namespace std;

class Employee
{
    public:

    int Id;
    string Name;
    float Salary;

    void Insert(int i, string n, float s)
    {
        Id=i;
        Name=n;
        Salary=s;
    }

    void Display()
    {
        cout<<Id<<"  "<<Name<<"  "<<Salary<<endl;
    }

};

int main(void)
{
    Employee e1;
    Employee e2;

    e1.Insert(201, "Neetu", 900000);
    e2.Insert(202, "Luna", 700000);

    e1.Display();
    e2.Display();

    return 0;


}