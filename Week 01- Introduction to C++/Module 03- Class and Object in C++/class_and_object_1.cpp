#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100]; // 100 byte
    // string name;
    int roll;       // 4 byte
    double gpa;     // 8 byte
};

int main()
{
    Student a;
    a.gpa = 4.73;
    a.roll = 10;
    char temp[100] = "Nafiz";
    // string temp = "nafiz";
    strcpy(a.name,temp);
    // a.name = temp;

    cout << a.name << endl << a.gpa << endl << a.roll;
    return 0;
}