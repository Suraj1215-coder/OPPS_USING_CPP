#include<iostream>
using namespace std;
class Example
{
    static int n;
    int a;
public:
    void display();

};

int Example::n=10;

void Example::display()
{
    cout<<a;
}


int main()
{
    Example E1;
    E1.display();
}