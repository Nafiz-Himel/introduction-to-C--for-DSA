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
int main()
{
    Student rahim(10, 5, 2.50);
    Student *kahim = new Student(2, 5, 5.00);

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << kahim->roll << " " << kahim->cls << " " << kahim->gpa << endl;
    return 0;
}