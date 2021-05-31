/* Program to copy one string to other */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{

    char key[25], buffer[25];

    cout<<"Enter the key string: "<<endl;
    cin.getline(key, 25);

    strcpy(buffer, key);

    cout<<"Key string is: "<<key<<endl;

    cout<<"Buffer string is: "<<buffer<<endl;

    return 0;


}