#include <iostream>
using namespace std;
class Test;
class Example{
    int a;
public:
        void geta(int);
        void Adisplay();
        friend int sum(Example, Test);
};
class Test
{
     int b;
public:
        void getb(int);
        void Bdisplay();
        friend int sum(Example, Test);
};

void Example::geta(int x)
{
    a=x;
}
void Example::Adisplay()
{
    cout<<"The value of a:"<<a<<endl;
}

void Test::getb(int y)
{
    b=y;
}
void Test::Bdisplay()
{
    cout<<"The value of b:"<<b<<endl;
}
int sum(Example E,  Test T)
{
    int s = E.a+T.b;
    cout<<s<<endl;
    return s;
}

int main()
{
    Example E;
    Test T;

    E.geta(10);
    T.getb(20);

    E.Adisplay();
    T.Bdisplay();
    sum(E, T);

    return 0;
}
