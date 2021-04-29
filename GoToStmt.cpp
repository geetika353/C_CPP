# include<iostream>
using namespace std;

int main()
{
    int age;

     ineligible:
    cout<<"You are ineligible to Vote!\n";

    cout<<"Enter your age:";
    cin>>age;

    if(age<18)
    {
        goto ineligible;
    }

    else
    {
        cout<<"You are eligible to vote!\n";
    }
}