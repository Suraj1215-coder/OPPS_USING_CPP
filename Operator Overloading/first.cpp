#include<iostream>
using namespace std;
class Exa 
{
    int a,b;
    public:
    void getdata(int ,int);
    void display();
    Exa sum(Exa &);

};
void Exa::getdata(int x,int y)
{
    a=x;
    b=y;
}
void Exa::display()
{
    cout<<a<<" "<<b;
}
Exa Exa::sum(Exa &E1)
{
    Exa S;
    S.a = a + E1.a;
    S.b = b + E1.b;
    cout<<endl;
    cout<<S.a+S.b;

}

int main()
{
    Exa A,B,c;
    A.getdata(10,20);
    A.display();
      cout<<endl;
    B.getdata(100,200);
    B.display();
    
    c = A.sum(B);
    c.display();
}