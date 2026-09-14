#include<iostream>
using namespace std;
class Circle {
    
    float radius;
    public:
    void getdata(int );
    void area(int);
};
void Circle::getdata(int r){
    radius = r;
    cin>>radius;
}
void Circle::area(int r){
    cout<<"the area of circle is : "<<3.14*radius*radius;
}

int main()
{
    Circle C;
    C.getdata(4);
    C.area(0);
    return 0;
}