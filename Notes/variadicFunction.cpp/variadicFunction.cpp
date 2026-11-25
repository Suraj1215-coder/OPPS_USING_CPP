#include<iostream>
#include<cstdarg>
using namespace std;
void display(int x , int y, ...)
{
    int n;
    va_list suraj;
    va_start(suraj,y);
    for(int i=0; i<y; i++)
    {
        n = va_arg(suraj ,int);
        cout<<suraj<<endl;
    }
    va_end(suraj);
}
int main(){
    display(1,2,3,4,5,6);
    return 0;
}