#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    string name;
    int roll;
    int math;
    int english;
    Student(string name,int roll,int math, int english)
    {
        this->name = name;
        this->roll = roll;
        this->math = math;
        this->english = english;
    }

    // void hello()
    // {
    //     cout << "hello from " << name <<endl;
    // }

    void total()
    {
        cout << "Total marks of" << name << " = " << math+english << endl; 
    }
};

int main()
{

    Student sakib("Shakib Ahmed", 23, 100, 90);
    Student rakib("Rakib Ahmed", 23, 10 ,20);
    cout << sakib.name << endl;
    sakib.total();
    rakib.total();
    return 0;
}