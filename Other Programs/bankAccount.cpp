
#include<iostream>
using namespace std;
class BankAccount
{
    static int total;
    int a;
    int b;
    static int display();
    public:
    void getdata(int, int);
    void print();
   
};

int BankAccount::total;
void BankAccount::getdata(int x, int y)
{
    a=x;
    b=y;

}
void BankAccount::print()
{
    cin>>a>>b;
    cout<<a+b<<endl;

}


int main()
{
   BankAccount B1;
   B1.getdata(20,30);
   B1.print();
}
