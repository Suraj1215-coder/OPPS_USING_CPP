#include<iostream>
using namespace std;
class A{
    int a;
    string name1;
    public:
    void geta(int);
    void getName1(string);
        friend A Sum(A);
        void display(A);

};

//////
class B{
    int b;
    string name2;
    public:
    void getb(int);
    void getName2(string);
        friend B Sum(B);
        void display(B);

};

//********************* *//

class C{
    int c;
    string name3;
    public:
    void getc(int);
    void getName3(string);
        friend C Sum(C);
        void display(C);

};
void A::geta(int x){
    a = x;
}
void A::getName1(string s){
    name1 = s;
}
//************* */

void B::getb(int y){
    b = y;
}
void B::getName2(string s2){
    name2 = s2;
}

//**************** */

void C::getc(int z){
    c = z;
}
void C::getName3(string s3){
    name3 = s3;
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
