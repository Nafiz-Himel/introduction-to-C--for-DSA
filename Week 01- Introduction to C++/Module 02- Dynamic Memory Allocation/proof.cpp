#include<bits/stdc++.h>
using namespace std;
int *p;
// void fun()
// {
//     int x = 10;
//     p = &x;
//     cout << "fun -> " << *p << endl;
// }
// main()
// {
//     fun();
//     cout << "main -> " << *p;

//     return 0;
// }

void fun()
{
    int *x = new int;
    *x = 10;
    p = x;
    cout << "fun -> " << *p << endl;
}
main()
{
    fun();
    cout << "main -> " << *p;

    return 0;
}