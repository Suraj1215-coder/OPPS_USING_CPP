#include <iostream>
#include<cstdarg>
using namespace std;
void display(int size,...)
{
    // int n;
    va_list surya;
    va_start(surya,size);
    for(int i=0; i<size; i++)
    {
        va_arg(surya,int);
    }
    va_end(surya);
}
int main(){
    display(2,10,20);
    return 0;
}
