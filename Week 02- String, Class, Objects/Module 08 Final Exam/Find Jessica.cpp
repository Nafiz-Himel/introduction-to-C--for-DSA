#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;

    int tmp = 0;
    while (ss >> word)
    {
        if (word == "Jessica")
        {
            tmp = 1;
            break;
        }
    }
    tmp == 0 ? cout << "NO" << endl : cout << "YES" << endl;
    return 0;
}