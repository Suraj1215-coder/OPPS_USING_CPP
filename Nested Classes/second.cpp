#include<iostream>
using namespace std;
class Outer{
    public:
        class Inner{
            public:
            void show();
        };
    };
    void Outer::Inner::show(){
        cout<<"hello hfj";
    }
int main(){
Outer::Inner obj;
obj.show();
return 0;
}
