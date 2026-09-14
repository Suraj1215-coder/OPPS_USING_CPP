#include<iostream>
using namespace std;
class B;
class A
{
    public:
        void display(B);
};
class B
{
    int b;
    public:
        void getb(int );
        friend void A::display(B);

};
void B::getb(int x)
{
    b = x;
}
void A::display(B B1)
{
    cout<<B1.b;
}

int main()
{
    B obj1;
    obj1.getb(10);
    A obj2;
    obj2.display(obj1);
}