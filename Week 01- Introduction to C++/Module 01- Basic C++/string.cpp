#include <iostream>
using namespace std;
main()
{
    int x;
    cin >> x ;
    cin.ignore();

    char s[100];
    // cin >> s;
    // fgets(s,100,stdin);
    cin.getline(s, 100);
    cout << x << endl << s;
    return 0;
}