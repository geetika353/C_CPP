#include <iostream>
using namespace std;

class Animal
{
    public:

    void eat()
    {
        cout<<"Eating!"<<endl;
    }
};

class Dog: public Animal
{
    public:

    void eat ()
    {
        cout<<"Eating Bread!"<<endl;
    }
};

int main ()
{
    Dog d= Dog();

    d.eat();
    return 0;
}