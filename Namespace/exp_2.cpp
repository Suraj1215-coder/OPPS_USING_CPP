#include<iostream>
using namespace std;

namespace A{
    int x= 10;
    void display(){
        cout<<"Start\n";
    }

}
namespace B{
    double b = 1.3;
    void display(){
        cout<<"B";
    }
}

void display();
void display(){
    cout<<"main"<<endl;
}
int main(){
 
    string x = "CSE 36";
    display();
    cout<<x<<endl;
    cout<<A::x<<endl;
    cout<<B::b<<endl;
    A::display();
    B::display();

}
