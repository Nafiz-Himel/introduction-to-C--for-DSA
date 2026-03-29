#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    char s;
    int b;
    char q;
    int c;
    cin >> a >> s >> b >> q >> c;

    if (s == '+')
    {
        a + b == c ? cout << "Yes" : cout << a + b;
    }

    if (s == '-')
    {
        a - b == c ? cout << "Yes" : cout << a - b;
    }

    if (s == '*')
    {
        a *b == c ? cout << "Yes" : cout << a * b;
    }

    return 0;
}