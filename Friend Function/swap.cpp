#include<iostream>
using namespace std;
class B;
class A
{
    int a;
public:
    void geta(int);
    friend void swapab(A,B);
};

class B
{
    int b;
public:
    void getb(int);
    friend void swapab(A,B);
};

void A::geta(int x)
{
    a = x;
}
void B::getb(int y)
{
    b = y;
}
void swapab(A A1, B B1)
{
    int t;
    t = A1.a;
    A1.a = B1.b;
    B1.b = t;
}
int main(){
    A obj1;
    B obj2;
    obj1.geta(10);
    obj2.getb(20);
    swapab(obj1,obj2);
    
}
