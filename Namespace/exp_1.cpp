#include<iostream>
using namespace std;

namespace Stant{
    void display()
    {
        cout<<"I am in display of start namespace";

    }
}
int main(){
    Stant::display();
}