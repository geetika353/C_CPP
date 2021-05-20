#include <iostream>
using namespace std;

class Employee
{
    public:

    int Id;
    string Name;
    float Salary;


    Employee(int i, string n, float s)
    {
        Id=i;
        Name=n;
        Salary=s;
    }

    void Display()
    {
        cout<<Id<<"   "<<Name<<"   "<<Salary<<endl;
    }
};

int main(void)
{
    Employee e1= Employee(101,"Sonu",600000);
    Employee e2= Employee(102, "Sneska", 200000);

    e1.Display();
    e2.Display();

    return 0;
}