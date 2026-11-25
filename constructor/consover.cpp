#include<iostream>
using namespace std;
class Example
{
    int a,b;
    public:
        Example();
        
        Example(int ,int);
        Example(Example &);
        void display();

};

Example::Example()
{
    cout<<"Enter the num";
    cin>>a>>b;

}
Example::Example(int x, int y)
{
    a = x;
    b=y;
}

Example::Example(Example &E){
    a = E.a;
    b = E.b;
}
void Example::display()
{
    cout<<a<<" "<<b;
}

int main()
{
    Example E;
    E.display();
    cout<<endl;
    Example E2(45,2);

    E2.display();
    cout<<endl;
    Example E3(E2);
    E3.display();
    cout<<endl;
    Example E4(E3);
    cout<<endl;  

    E4.display();

}