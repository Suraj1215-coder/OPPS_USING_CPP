#include<iostream>
using namespace std;
class Example{
    int a, b;
    public:
        void getDataA(int);
        void getDataB(int);
        void display();
        Example operator-();
};
        void Example::getDataA(int x){
            x = a;
        }
        void Example::getDataB(int y)
        {
            y = b;
        }
        void Example::display(){
            cout<<a<<b<<endl;
        }
        int main(){
            Example E;
            E.display();
            return 0;
        }

