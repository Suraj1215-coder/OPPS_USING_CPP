#include<iostream>
using namespace std;
class Example
{
    int a,b;
    public:
        Example();
        ~Example();
        void display();

};
Example::Example()
{
    a =10; 
    b=20;
}
Example::~Example()
{
    cout<<a<<" "<<b;
}
void Example::display(){
    cout<<a<<b;
}


