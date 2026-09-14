#include<iostream>
using namespace std;
void display()
{
    cout<<"end"<<endl;
}
template <class T1, class... args>
void display(T1 first, args... rest)
{
    cout<<first<<endl;
    display(rest...);
    return;
}

int main()
{
    display(10,20.4,"Surya", 'A', true);
    return 0;
}