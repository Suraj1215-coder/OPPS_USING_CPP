#include<iostream>
using namespace std;
class Test;
class Example{
    int a;
    public:
        Example(int);
        void display();
        friend void Sum(Example, Test);
};

class Test{
    int b;
    public:
        void display();
        Test(int);
        friend void Sum(Example , Test );
};
Example::Example(int x)
{
    a = x;
}
void Example::display()
{
    cout<<a;
}
Test::Test(int y)
{
    b = y;
}
void Test::display()
{
    cout<<b;
}
void Sum(Example E1, Test T1)
{
    int s = E1.a+T1.b;
    cout<<s;
}

int main()
{
    Example E1(10);
    E1.display();
    cout<<endl;
    Test T1 = Test(20);
    T1.display();
    cout<<endl;
    cout<<"Sum:=";
    Sum(E1,T1);
}