#include<iostream>
using namespace std;
class Student{
    
    int roll;
    public:
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
    Student *E = new Student(1000);
    E->display();
    delete E;
}