#include<iostream>
using namespace std;
class item
{
    public:
        static int count;

};
int item::count = 10;
int main()
{
    cout<<item::count;
}