#include<iostream>
using namespace std;
class Overload
{
    int a,b;

    public:
    //  void getab(int , int);
     void sum();
     int sum (int,int);
    //  double sum(int,double);
};

// void Overload::getab(int x,int y){
//     a = x;
//     b = y;
// }
void Overload::sum(){
    cout<<"Enter numbers:";
    cin>>a>>b;
    int s = a+b;
    cout<<"Sum"<<" "<<s;
}
int Overload::sum(int x, int y){
    a = x;
     b = y;
     
}

int main(){
    Overload O;
    int n1,n2;
    cout<<"Enter numbers:";
    cin>>n1>>n2;
   
}
