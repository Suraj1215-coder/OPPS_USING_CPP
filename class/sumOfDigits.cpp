#include<iostream>
using namespace std;
class SumDigits {
    
    int n;
    public:
    void getdata(int );
    void sum(int);
};
void SumDigits::getdata(int num){
    n = num;
    cin>>n;
}
void SumDigits::sum(int num){
    int sum = 0;
    while(n>0){
        sum += n%10;
        n /= 10;
    }
    cout<<"the sum of digits is : "<<sum;
}
int main()
{
    SumDigits S;
    S.getdata(0);
    S.sum(0);
    return 0;
}