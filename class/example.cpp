#include <iostream>
using namespace std;
class Example {
    int a,b;
    public:
    void getdata() {
        int n;
        cout << "enter two numbers:";
        cin >> a >> b;
    }
    void print() {
        cout << "the two numbers are: " << a << " and " << b << endl;
    }
};

int main()
{

    
    Example E;

    E.getdata();
    E.print();
    return 0;
}