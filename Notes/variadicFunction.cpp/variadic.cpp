#include<iostream>
#include<cstdarg>
using namespace std;
void display(int p,int sum=0, ...)
{
    int n;
    va_list args;
    va_start(args,p);
    for(int i=0; i<p; i++)
    {
        n = va_arg(args, int);
        
        sum = sum +n;
        cout<<sum<<endl;

    }
    va_end(args);
}
int main()
{
    display(5,1,2,3,4,5);
    return 0;
}
