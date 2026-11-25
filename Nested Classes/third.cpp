#include<iostream>
using namespace std;
class Outer{
    private:
        class Inner{
            public:
                void display(){
                    cout<<"hello";

                }
        };
        public:
        void show();
        Inner obj;
        obj.display();
}