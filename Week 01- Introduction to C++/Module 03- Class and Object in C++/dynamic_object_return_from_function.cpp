#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int roll, int cls, int gpa)
    {
        (*this).roll = roll;
        (*this).cls = cls;
        this->gpa = gpa;
    }
};

Student *fun()
{
    Student *karim = new Student(10, 5, 2.50);
    return karim;
}

int main()
{
    Student *obj = fun();
    cout << (*obj).roll << " " << (*obj).cls << " " << (*obj).gpa << endl; 
}