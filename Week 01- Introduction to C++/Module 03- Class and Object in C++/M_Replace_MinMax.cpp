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

    int mn_val = INT_MAX;
    int mx_val = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (a[i] < mn_val)
        {
            mn_val = a[i];
        }
        if (a[i] > mx_val )
        {
            mx_val = a[i];
        }
    }

    int mn_indx = 0;
    int mx_indx = 0;

    for (int i = 0; i < n; i++)
    {
        if (a[i] == mn_val)
        {
            mn_indx = i;
        }
        if (a[i] == mx_val)
        {
            mx_indx = i;
        }
    }

    swap(a[mn_indx], a[mx_indx]);

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}