#include<iostream>
using namespace std;
class rectangle;
class circle
{
    int r;
    public: 
        void getr(int);
        void showr();
        friend class rectangle;
        void displayb(rectangle , rectangle );
};
class rectangle
{
     int a,b;
    public: 
        void getb(int,int);
        void showab();
        friend class circle;
        void displaya(circle);
};
void circle::getr(int x){
    r = x;
}
void circle::showr()
{
    cout<<r<<endl;
}

void rectangle::getb(int x, int y)
{
    a = x;
    b= y;
}
void rectangle::showab()
{
    cout<<a<<b<<endl;
}

void circle::displayb(rectangle ret1 , rectangle ret2)
{
    int areaR = (ret1.a*ret2.b);
    cout<<areaR<<endl;
}
void rectangle::displaya(circle c)
{
    int areaC = 3.14*c.r*c.r;
    cout<<areaC<<endl;
}

