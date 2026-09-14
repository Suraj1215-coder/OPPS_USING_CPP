#include <iostream>
using namespace std;
class Sum{
    int a ,b;
    public:
    int  getdata(int , int );
    int print(int ,int);
};

int Sum::getdata(int x , int y){
    cin>>a>>b;
    
}
int Sum::print(int x , int y){
    cout<<"the sum of two numbers is : "<<a+b;
}

int main()
{
    Sum S;
    S.getdata(4,4);
    S.print(0,0);
    return 0;
}
