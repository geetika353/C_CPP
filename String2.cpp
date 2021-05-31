/* Program to combine two strings. We will use strcat() */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char key[25], buffer[25];

    cout<<"Enter the Key string: ";
    cin.getline(key, 25);

    cout<<"Enter the buffer string: ";
    cin.getline(buffer, 25);

    strcat(key , buffer);

    cout<<"Key string is: "<<key<<endl;
    cout<<"Buffer string is: "<<buffer<<endl;

    return 0;
}

