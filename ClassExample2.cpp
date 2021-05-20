#include <iostream>
using namespace std;

class Student
{
    public:

    int id;
    string name;

    void Insert(int i, string n)
    {
        id=i;
        name=n;
    }

    void Display()
    {
        cout<<id<<"  "<<name<<endl;
    }
};

int main(void)
{
    Student s1;// creating an object
    Student s2;// creating an object

    s1.Insert(201, "Meena");
    s2.Insert(202, "Nayeon");

    s1.Display();
    s2.Display();

    return 0;


}