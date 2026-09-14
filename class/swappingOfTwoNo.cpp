#include<iostream>
using namespace std;
class Swapping {
    
    int a,b;
    public:
    void getdata(int , int );
    void swap(int , int );
    void print();
};
void Swapping::getdata(int x, int y) {
    a = x;
    b = y;
    cin >> x >> y;
}
void Swapping::swap(int x, int y) {
    int temp = a;
    a = b;
    b = temp;
}
void Swapping::print() {
    cout << "a = " << a << ", b = " << b << endl;
}

int main()
{
    Swapping S;
    S.getdata(4, 5);
    S.swap(0, 0);
    S.print();
    return 0;
}