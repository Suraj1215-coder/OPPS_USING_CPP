#include<iostream>
using namespace std;
class Example{
    int a,b;
    public:
        Example(int, int);
        void displaySum();
};
Example::Example(int x, int y)
{
    a = x;
    b=y;
}
void Example::displaySum()
{
    cout<<a+b;
}

int main()
{
    Example E1 = Example(100,200);     //  Calling constructor explicitly
    E1.displaySum();
    cout<<endl;
    Example E2(20,30);   // Calling constructor implicitly
    E2.displaySum();

    cout<<endl;
    // Copy Constructor:- ek object ko dusere object main copy kar du 

    Example E3 = E1;
    E3.displaySum();
}