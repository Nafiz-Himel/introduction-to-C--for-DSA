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
    Student karim(10, 5, 2.50);
    Student *p = &karim;
    return p;
}

int main()
{
    Student *obj = fun();

    cout << (*obj).roll << " " << (*obj).cls << " " << (*obj).gpa << endl; //garbage values asbe
    return 0;
}