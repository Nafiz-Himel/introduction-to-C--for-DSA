#include <bits/stdc++.h>
using namespace std;
int main()
{
    char s[100001];
    while (cin.getline(s, 100001))
    {
        int len = strlen(s);
        char a[100001];
        int j = 0;

        for (int i = 0; i < len; i++)
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                a[j] = s[i];
                j++;
            }
        }

        if (j > 0)
        {
            sort(a, a + j);
            for (int i = 0; i < j; i++)
            {
                cout << a[i];
            }
        }
        cout << endl;
    }
    return 0;
}
