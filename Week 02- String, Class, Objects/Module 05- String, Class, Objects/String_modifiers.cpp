#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "Hello World";
    // int x = 10;
    // int y = 10;
    // x+= y; // x + y

    string s1 = "hi";
    // s1+=s; //strcat{}
    s.append(s1);
    // cout << s1 << endl;
    cout << s << endl;

    string s2 = "hello";
    s2.push_back('A'); //s2 += 'a';
    cout << s2 << endl;

    string s3 = "gello";
    s[2] = 'h';
    cout << s3 << endl;

    string s4 = "cholo";
    s4.pop_back();
    cout << s4 << endl;
    string s5 = s4;
    cout << s5 << endl;

    s5.assign(s3);
    cout << s5 << endl;

    s5.erase(3,1);
    cout << s5 << endl;

    s5.replace(1,2,"hi");
    cout << s5 << endl;

    s5.insert(2,"l"); // s5.replace(2,0,"l")
    cout << s5 << endl;
    return 0;
}