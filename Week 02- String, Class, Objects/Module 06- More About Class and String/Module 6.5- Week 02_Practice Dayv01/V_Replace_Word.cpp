#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string egypt = "EGYPT";
    for (int i = 0; i + 5 <= s.size(); i++)
    {
        int flag = 1;
        for (int j = 0; j < egypt.size(); j++)
        {
            if (s[i + j] != egypt[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            s.replace(i, 5, " ");
            i = max(-1, i - 5);
        }
    }

    cout << s;

    return 0;
}