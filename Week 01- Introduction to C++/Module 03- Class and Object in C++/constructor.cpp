#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    int roll;
    int cls;
    double gpa;

    Student(int r, int c, int g)
    {
        roll = r;
        cls = c;
        gpa = g;
    }
};
int main()
{
    //Student rahim
    //cin >> rahim.roll << rahim. cls << rahim.gpa;
    Student rahim(10, 5, 2.50);
    // rahim.roll = 40;
    // rahim.cls = 4;
    // rahim.gpa = 2.50;

    Student kahim(2, 5, 5.00);
    // kahim.roll = 2;
    // kahim.cls = 4;
    // kahim.gpa = 5.00;

    cout << rahim.roll << " " << rahim.cls << " " << rahim.gpa << endl;
    cout << kahim.roll << " " << kahim.cls << " " << kahim.gpa << endl;
    return 0;
}