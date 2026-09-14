#include<iostream>
using namespace std;

void Sum();
int Sum(int , int);
float Sum(int , float , int);



int main(){
    int a ,b ,r1;
    float r2, c;
    cout<<"enter the num."<<endl;
    cin>>a>>b>>c;
    r1 = Sum(a,b);
    r2 = Sum(a,b,c);

}
void Sum(){
    int x, y,s;
    cout<<"enter numbers"<<endl;
    cin>>x>>y;
    s = x+y;
    cout<<s<<endl;
    
}
int Sum(int x, int y){
    cout<<"Enter number only int val:"<<endl;
    int p = x+y;
    cout<<"sum of num only int val:"<<endl;
    cout<<p<<endl;
}
float Sum(int x, float y, int z){
    cout<<"Enter the number float type:"<<endl;
    int f = x+y+z;
    cout<<"Sum of float and int values:"<<endl;
    cout<<f<<endl;
}