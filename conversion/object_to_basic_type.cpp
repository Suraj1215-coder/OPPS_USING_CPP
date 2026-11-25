#include<iostream>
using namespace std;
class Example{
    int a;
    public:
        Example(int);
        operator int();  // which returns the value stored in the object

};
Example::Example(int x)
{
    a = x;
}
Example::operator int(){
    return a;
}
int main()
{
    Example E(50);
    int r;
    r = E;
    cout<<r<<endl;
    return 0;
}