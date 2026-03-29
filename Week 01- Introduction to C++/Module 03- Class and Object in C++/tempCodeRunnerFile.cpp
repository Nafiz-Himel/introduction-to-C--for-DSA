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
    Student rahim(10, 5, 2.50);
    return rahim;
}

int main()
{
    Student kahim(2, 5, 5.00);
    Student obj = fun();

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << obj.roll << " " << obj.cls << " " << obj.gpa << endl;
    return 0;
}