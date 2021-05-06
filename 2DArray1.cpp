#include <iostream>
using namespace std;

int main()
{
    int T[3][3] =
    {
        {2,5,5},
        {3,9,6},
        {4, 8,2}
    }; // Initialisation at the time of declaration

        //Traversal
        for(int i=0; i<3; ++i)
        {
            for(int j=0; j<3; ++j)
            {
                cout<<T[i][j]<<"   ";
            }

            cout<<"\n";
        }
        return 0;

    
}