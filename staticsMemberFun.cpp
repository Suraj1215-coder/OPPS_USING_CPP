//statics data member ager private main ho 
#include<iostream>
using namespace std;
class Example
{
    static int a;

    public:
    static void display();
   
};

int Example::a=10;
void Example::display()
{
    cout<<a;
}


int main()
{  
    Example e1;  /// object method se access kar sakte hai but karna nahi 
    e1.display();


    Example::display();// best method to call function from private section
}