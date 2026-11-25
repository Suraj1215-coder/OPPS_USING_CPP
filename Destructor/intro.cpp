#include<iostream>
using namespace std;
class Example
{
    public:
        Example()
        {
            cout<<"Constructor Called";
        }
        ~Example()
        {
            cout<<endl;
            cout<<"Destructor Called";
        }
};
int main(){
    Example E1;
}