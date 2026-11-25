#include<iostream>
using namespace std;
class Example{
    int a;
    public:
        Example(int);
        void disp();
        Example operator++(int);
};
Example::Example(int x)
{
    a = x;

}
void Example::disp(){
    cout<<a<<endl;
}
Example Example::operator++(int){
    Example E2(0);
    E2.a = a++;
    return (E2);
}
int main()
{
    Example A(10);
    A.disp();
    Example B(0);
    B.disp();
    B = A++;
    B.disp();
    A.disp();
    return 0;
}