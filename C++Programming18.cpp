/* Program to convert character array to string */

#include <iostream>
using namespace std;

int main()
{
    char char_arr[]={'J', 'A', 'V', 'A', 'T', 'P', 'O', 'I', 'N', 'T'};

    int array_size= sizeof(char_arr)/sizeof(char);

    string j ="    ";

    int i;

    for(i= 0; i<array_size; i++)
    {
        /*RETRIEVING  and merging the value of character array on position */

        j = j + char_arr[i];

        {
            cout<<j<<endl;
        }

    }
}