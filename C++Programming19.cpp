/* Program to convert char to a string using 'while' loop */

#include <iostream>
using namespace std;

int main()
{
    char char_arr[]= {'J', 'A', 'V', 'A', 'T', 'P', 'O', 'I', 'N', 'T'};

    int array_size= sizeof(char_arr)/sizeof(char);

    string j = "     ";
     
     int i= 0;

     while(i< array_size)
     {

         j= j + char_arr[i];

         i++;
     }

     cout<<j<<endl;
}
