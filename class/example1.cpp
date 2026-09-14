#include<iostream>
using namespace std;
class Example {
    int a,b;
    public:
    void getdata();
    void print();
};

void Example::getdata() {
    cout << "enter two numbers:";
    // int a,b;
    cin >> a >> b;
}
 
void Example::print() {
    cout << "the two numbers are: " << a << " and " << b << endl;
}
int main() {
    Example obj;
    obj.getdata();
    obj.print();
    return 0;
}