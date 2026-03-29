#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        string s;
        cin >> s;
        int cnt = 1;
        int first3Sum = 0;
        int last3Sum = 0;
        for (char c : s)
        {
            int our_chr_number = c - '0';
            if (cnt <= 3)
            {
                first3Sum += our_chr_number;
            }
            else
            {
                last3Sum += our_chr_number;
            }
            cnt++;
        }
        if(first3Sum == last3Sum)
        {
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    return 0;
}