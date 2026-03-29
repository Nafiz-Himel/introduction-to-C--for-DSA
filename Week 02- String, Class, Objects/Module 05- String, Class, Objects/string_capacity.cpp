#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s = "nafiz";
    cout << s.size() << endl;
    cout << s.max_size() << endl; //10^6 , 10^7
    cout << s.capacity() << endl;

    string s1 = "clear";
    s1.clear();
    cout << s1 << endl << s1.size() << endl;

    if( s1.empty() == true) // s1.size == 0
    {
        cout << "fhaka" << endl;
    }
    else
    {
        cout << "not fhaka" << endl;
    }

    string s2 = "hello nafiz";
    s2.resize(2);
    cout << s2 << endl;

    string s3 = "hello hola";
    s3.resize(12,'x');
    cout << s3 << endl;
    return 0;
}