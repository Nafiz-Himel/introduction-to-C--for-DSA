#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int x,y;
    cin >> x >> y;

    // if(x>y)
    // {
    //     cout << x;
    // }
    // else
    // {
    //     cout << y;
    // }
    
    cout << min(x,y) << endl;
    cout << min({11,4,5,9,10}) << endl;

    cout << max(x,y) << endl;
    cout << max({11,4,5,9,10}) << endl;

    // int tmp = x;
    // x = y;
    // y = tmp;
    // cout << x << " " << y << endl;

    swap(x,y);
    cout << x << " " << y << endl;

    return 0;
}