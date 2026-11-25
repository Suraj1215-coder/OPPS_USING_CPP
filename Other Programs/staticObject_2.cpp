#include<iostream>
using namespace std;
class Example
{
   
public:
 static int n;   // 
    int a;
    
   static void display();

};
int Example::n=10;
int Example::a=20;
void Example::display()
{
    cout<<a<<n;
}
int main()
{
    Example E1;
    E1.display();
}