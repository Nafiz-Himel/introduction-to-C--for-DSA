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

Student fun()
{
    Student kahim(10, 5, 2.50);
    return kahim;
}

int main()
{
    Student rahim(2, 5, 5.00);
    Student obj = fun();

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}