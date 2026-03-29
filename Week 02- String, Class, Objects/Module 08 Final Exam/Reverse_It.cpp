#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string n;
    int c;
    char sec;
    int id;
};
int main()
{
    int n;
    cin >> n;
    Student s[100];
    for (int i = 0; i < n; i++)
    {
        cin >> s[i].n >> s[i].c >> s[i].sec >> s[i].id;
    }
    for (int i = 0; i < n / 2; i++)
    {
        swap(s[i].sec, s[n - 1 - i].sec);
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i].n << " " << s[i].c << " " << s[i].sec << " " << s[i].id << endl;
    }
    return 0;
}
