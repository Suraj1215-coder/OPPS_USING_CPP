#include<iostream>
using namespace std;
class Exa 
{
    int a,b;
    public:

    Exa(int, int);
    void display();
    Exa sum(Exa &);

};
Exa::Exa(int x,int y)
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
    
    return S;
}

int main()
{
   Exa A(10,20);
   A.display();

}