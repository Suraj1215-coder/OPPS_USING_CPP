#include<iostream>
using namespace std;
class Example{
    int a,b;
    public:
        Example(int, int);
        void display();
};
Example::Example(int x, int y)
{
    a = x;
    b=y;
}
void Example::display()
{
    cout<<a<<b<<" ";
}

int main()
{
    Example E1 = Example(100,200);     //  Calling constructor explicitly
    E1.display();

    Example E2(20,30);   // Calling constructor implicitly
    E2.display();

    // Copy Constructor:- ek object ko dusere object main copy kar du 
cout<<endl;
    Example E3 = E1;
    E3.display();

    //****************************** */


}