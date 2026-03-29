#include<bits/stdc++.h>
using namespace std;
int main()
{
    // char s[10] ="hello";
    // char s2[10] = "gallo";
    string s = "hello";
    s = "gello";
    string s2 = "gello";

    // if(strcmp(s,s2) == 0)
    // {
    //     cout << "Same" << endl;
    // }
    // strcpy(s,"gello");

    if(s == s2)
    {
        cout << "same" << endl;
    }
    else
    {
        cout << "not same" << endl;
    }

    // cout << s << endl;
    return 0;
}