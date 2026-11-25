#include<iostream>
using namespace std;
class B;
class C;
class A{
    int a;
    public:
        void geta(int);
        void showa();
        friend void avg(A,B,C);
};
class B{
    int b;
    public:
        void getb(int);
        void showb();
        friend void avg(A,B,C);
};

class C{
    int c;
    public:
        void getc(int);
        void showc();
        friend void avg(A,B,C);
};

void A::geta(int x)
{
    a = x;
}
