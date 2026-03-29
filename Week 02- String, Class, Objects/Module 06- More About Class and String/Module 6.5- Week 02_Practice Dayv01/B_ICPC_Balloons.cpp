#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string a;
        cin >> a;
        int bln_cnt = 0;
        bool seen[26] = {false};
        for (char c : a)
        {
            if ('A' <= c && c <= 'Z')
            {
                int idx = c - 'A';
                if (seen[idx] == true)
                {
                    bln_cnt += 1;
                }
                else
                {
                    bln_cnt += 2;
                    seen[idx] = true;
                }
            }
        }
        cout << bln_cnt << endl;
    }

    return 0;
}