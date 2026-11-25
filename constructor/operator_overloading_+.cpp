#include<iostream>
using namespace std;
class Example{
    public:
        Example();
        Example(int , int);
        void display();
    Example::Example()
    {
        a = 0;
        b = 0;
    }
    Example::Example(int x,int y){
        x = a;
        y = b;
    }
    void Example::display(){
        cout<<a<<b<<endl;
    }
    Example operator +(Example E1, Example E2)
    {

    }
}

int main(){
    Example A(10,20), B(100,200),C;
    A.display();
    B.display();
    C.display();
    C = A+B;
    C.display();

    return 0;
}