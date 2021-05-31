/* Program to compare two strings. We will use strcmp(). */

#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    char key[]= "Mango";

    char buffer[50];

    do{

        cout<<"What is my Favorite fruit?"<<endl;
        cin>> buffer;

    }while( strcmp(key, buffer)!= 0);

    cout<<"Answer is correct!"<<endl;

    return 0;
}
