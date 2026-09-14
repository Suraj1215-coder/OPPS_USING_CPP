#include<iostream>
using namespace std;

namespace first{
    int x = 10;
}

namespace second{
    double x= 2.4;
}
using namespace first;
using namespace second;

int main(){
    cout<<x;
    
}