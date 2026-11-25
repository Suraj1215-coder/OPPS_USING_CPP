#include <iostream>
using namespace std;
class Student{
    int roll;
    string name;
    static int count;
    public:
        Student(int string);
        void display();
        static display();
};

Student::Student(int r, string n){
    roll = r;
    name = n;
    count++;
}
void Student::display(){
    cout<<roll<<name;
}
int student::count;
void Student::