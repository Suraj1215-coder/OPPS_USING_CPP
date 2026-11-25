#include<iostream>
using namespace std;
class Sum
{
    int a,b;
    public:
        Sum();
        void display();

};
Sum::Sum()
{
    a = 10;
    b = 20; 
   
}
void Sum::display()
{
    cout<<a+b;
}
int main(){
    Sum s;
    s.display();
}