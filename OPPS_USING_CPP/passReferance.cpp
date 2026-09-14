#include<iostream>
using namespace std;
int Sum(int *, int *); // function declearation
int Sum(int *x, int *y){ // function defination
    int s = *x+*y;
    return s;
}

int main(){
    int a , b , r;
    cout<<"Enter values"<<endl;
    cin>>a>>b;
    r = Sum(&a , &b);  // function calling
    cout<<r;

}