#include<iostream>
using namespace std;
class Example{
    double a;
    public:
        Example(double);
        operator double();  // which returns the value stored in the object

};
Example::Example(double x)
{
    a = x;
}
Example::operator double(){
    return a;
}
int main()
{
    Example E(50.34);
    double r;
    r = E;
    cout<<r<<endl;
    return 0;
}