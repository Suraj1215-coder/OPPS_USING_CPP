#include<iostream>
using namespace std;
class Sample
{
    int a,b;
    public:
        Sample();
        void show();
};
Sample::Sample()
{
    a = 10;
    b = 20;

}
void Sample::show()
{
    cout<<a<<b;

}
int main()
{
    Sample s;
    s.show();
}