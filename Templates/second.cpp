#include<iostream>
using namespace std;
template <class T1, class T2>
void display(T1 a, T2 b)
{
    cout<<a<<endl;
      cout<<b<<endl;

}
int main()
{
    display(10,20);
    display(3.2, 5.2);
    display("A","B");
    return 0;
}


