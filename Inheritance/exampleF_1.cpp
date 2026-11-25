#include<iostream>
using namespace std;
class P{
    public:
      void  getdata();

};
class C:public P{
    public:
        void display();
};
void P::getdata()
{
    cout<<"Hello";
}
void C::display()
{
    cout<<"\n This is display function";
}
int main()
{
    P p1;
    p1.getdata();
    C c1;
    c1.display();
    c1.getdata();
}