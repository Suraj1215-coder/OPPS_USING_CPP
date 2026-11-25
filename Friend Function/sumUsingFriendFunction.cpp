#include<iostream>
using namespace std;
class A{
    int a;
    public:
    void geta(int);
        friend A Sum(A  , A);
        void display(A);

};

void A::geta(int x){
    a = x;
}
A Sum(A A1, A A2){
    A s;
    s.a = A1.a+A2.a;
    return s;
}

void A::display(A b){
    cout<<b.a;
}

int main(){
    A A,B,C;
    A.geta(10);
    B.geta(20);
    C = Sum(A,B);
    C.display(C);
}
