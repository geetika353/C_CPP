#include <iostream>
using namespace std;
int main()
{
    char* names[5]=
    {"John",
    "Peter",
    "Marco",
    "Devin",
    "Ronan"};

    for(int i=0; i<5; i++)

    {
        cout<<names[i]<<endl;
    }

    return 0;
}