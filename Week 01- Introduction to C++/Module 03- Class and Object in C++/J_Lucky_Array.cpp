#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[0] == a[i])
        {
            count++;
        }
    }
    count % 2 == 0 ? cout << "Unlucky" : cout << "Lucky";
    return 0;
}