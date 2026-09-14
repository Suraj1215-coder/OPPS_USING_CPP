#include<iostream>
using namespace std;
// void display(int x)
// {
//     cout<<x<<"\n";
// }
// void display(double x)
// {
//     cout<<x<<"\n";
// }
// void display(string name)
// {
//     cout<<name<<"\n";
// }

template <class T>
void display(T x)
{
    cout<<x<<"\n";
}
int main()
{
    display(5);
    display(5.5);
    display("Hello");
    display(2.3993838902803);
    return 0;
}
