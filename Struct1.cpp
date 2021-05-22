#include <iostream>
using namespace std;

struct Rectangle
{
    int width, height;
};

int main(void)
{
    struct Rectangle rec;

    rec. width= 50;
    rec. height= 60;

    cout<<"Area of the Rectangle is: "<<(rec.width*rec.height)<<endl;

    return 0;
}