#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string n;
    int c;
    char s;
    int id;
    int mm;
    int em;
    int tm;

    Student() {}
    Student(string n, int c, char s, int id, int mm, int em)
    {
        this->n = n;
        this->c = c;
        this->s = s;
        this->id = id;
        this->mm = mm;
        this->em = em;
        this->tm = mm + em;
    }
};

int main()
{
    int n;
    cin >> n;

    Student students[100];

    for (int i = 0; i < n; i++)
    {
        string n;
        int c, id, mm, em;
        char s;

        cin >> n >> c >> s >> id >> mm >> em;

        students[i] = Student(n, c, s, id, mm, em);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (students[i].tm < students[j].tm)
            {
                swap(students[i], students[j]);
            }
            else if (students[i].tm == students[j].tm && students[i].id > students[j].id)
            {
                swap(students[i], students[j]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << students[i].n << " " << students[i].c << " " << students[i].s << " " << students[i].id << " " << students[i].mm << " " << students[i].em << endl;
    }

    return 0;
}