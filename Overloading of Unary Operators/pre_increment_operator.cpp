#include<iostream>
using namespace std;
class Example{
    int a;
    public: 
        Example(int);
        void display();
        Example operator++();

};
Example::Example(int x)
{
    a = x;
}
 void Example::display()
 {
    cout<<a<<endl;

 }
 Example operator++(Example E)
 {
    E.a = ++a; 
    return (E);
 }
 int main()
 {
    Example E1(10);
    E1.display();
    Example E2(0);
    E2 = ++E1;
    E2.display();
    E1.display();
    return 0;

 }

