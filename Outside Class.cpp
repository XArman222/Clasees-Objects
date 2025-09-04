// Arman Majhi
// 24070123022

#include<iostream>
using namespace std;

class Student
{
    public:
    void myMethod();
};

void Student::myMethod()
{
    cout<<"I am Ankush";
}

int main()
{
    Student s1;
    s1.myMethod();
}

// OUTPUT
// I am Ankush
