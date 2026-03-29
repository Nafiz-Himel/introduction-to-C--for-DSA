#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin >> s;
    cout << s[2] << endl;
    cout << s.at(2) << endl;
    cout << s.front() << endl;
    cout << s.back() << endl;
    cout << s[s.size()-1] << endl;
    return 0;
}