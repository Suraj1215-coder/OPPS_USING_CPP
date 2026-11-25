#include<iostream>
using namespace std;
class B;
class C;
class A{
    int a;
    public:
        void geta(int);
        void getb(int);
        friend void avg(A,B,C);
};
class B{

}