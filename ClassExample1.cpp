#include <iostream>
using namespace std;

class Student
{
    public:

    int Id;
    string Name;

};

int main()
{
    Student s1;

    s1.Id=209;
    s1.Name= "Rekha Kumari";

    cout<<s1.Id<<endl;
    cout<<s1.Name<<endl;

    return 0;
}