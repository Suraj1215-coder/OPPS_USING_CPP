#include<iostream>
using namespace std;
class Multi
{
    int a,b;
    public:
        Multi();
        void display();

};
Multi::Multi()
{
    a = 10;
    b = 20; 
   
}
void Multi::display()
{
    cout<<a*b;
}
int main(){
    Multi s;
    s.display();
}