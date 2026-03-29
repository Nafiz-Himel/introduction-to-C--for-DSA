#include<iostream>
using namespace std;
main()
{
    int day;
    cin >> day;

    switch(day)
    {
        case 1:
        cout << "Saturday\n";
        break;

        case 2:
        cout << "Sunday\n";
        break;

        case 3:
        cout << "Monday\n";
        break;

        default:
        cout << "Lal Friday x wrong input";
    }
    return 0;
}