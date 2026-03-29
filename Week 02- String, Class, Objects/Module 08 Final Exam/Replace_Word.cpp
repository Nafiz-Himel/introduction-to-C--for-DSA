#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s, x;
        cin >> s >> x;

        int idx = s.find(x);
        while (idx != -1)
        {
            s.erase(idx, x.size());
            s.insert(idx, "#");
            idx = s.find(x);
        }
        cout << s << endl;
    }
    return 0;
}
