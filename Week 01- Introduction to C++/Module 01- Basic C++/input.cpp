#include<iostream>
using namespace std;
main()
{
    int x;
    char c;
    double d;
    cin >> x >> c >> d;

    cout << x << " " << c << " " << d << endl;

    char ch = 'a';
    int ascii = ch;
    cout << ascii << endl;
    cout << (int)ch << endl;
    cout << (char)ch << endl;
    return 0;
}