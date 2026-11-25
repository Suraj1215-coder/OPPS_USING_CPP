#include<iostream>
using namespace std;
class B;
class A
{
    int a;
    public: 
        void geta(int);
        void showa();
        friend class B;
        void displayb(B);
};
class B
{
     int b;
    public: 
        void getb(int);
        void showb();
        friend class A;
        void displaya(A);
};

void A::geta(int x)
{
    a=x;
}

void A::showa()
{
    cout<<a<<endl;
}

void B::getb(int y)
{
    b = b;
}
void B::showb()
{
    cout<<b<<endl;
}

void A::displayb(B B1)
{
    cout<<B1.b<<endl;
}
void B::displaya(A A1)
{
    cout<<A1.a<<endl;
}
int main()
{
    A obj1;
    obj1.geta(10);
    obj1.showa();
    
    B obj2;
    obj2.getb(2);
    obj2.showb();
    obj1.displayb(obj2);
    obj2.displaya(obj1);
}