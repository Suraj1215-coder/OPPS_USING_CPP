#include<iostream>
using namespace std;

class item
{
    static int count;
    public:
    static void show();

};
int item::count = 10;
void item::show()
{
    cout<<count;
}
int main()
{
    item::show;
}