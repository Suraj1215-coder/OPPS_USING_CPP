#include<iostream>
using namespace std;
class Student{
    public:
    int roll;
        Student(int);
        void display();

};
Student::Student(int x){
    roll  = x;

}
void Student::display(){
    cout<<roll<<endl;
}

int main(){
    Student *ptr = new Student(101);
    


}
