#include <iostream>
using namespace std;


class A  
{  
   public:  
void display()  
{  
   cout<<"Class A"<<endl;  
}   
} ;  
class B  
{   
  public:  
 void display()  
{  
 cout<<"Class B"<<endl;  
}  
} ; 

int main()  
{  
    B b;  
   b.display();               // Calling the display() function of B class.  
   b.B :: display();           // Calling the display() function defined in B class.  
   
   A a;  
   a.display();               // Calling the display() function of A class.  
   a.A :: display();      // Calling the display() function defined in A class.  
} 