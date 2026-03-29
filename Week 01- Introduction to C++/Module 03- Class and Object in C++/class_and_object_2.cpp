#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100]; // 100 byte
    int roll;       // 4 byte
    double gpa;     // 8 byte
};

int main()
{
    Student a,b;
    cin >> a.name >> a.gpa >> a.roll;
    cin >> b.name >> b.gpa >> b.roll;

    cout << a.name << " " << a.gpa << " " << a.roll << endl;
    cout << b.name << " " << b.gpa << " " << b.roll;
    return 0;
}