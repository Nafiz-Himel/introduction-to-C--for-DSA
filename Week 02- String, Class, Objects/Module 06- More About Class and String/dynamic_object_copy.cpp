#include<bits/stdc++.h>
using namespace std;
class Cricketer
{
    public:
    int jersey;
    string country;
    Cricketer(string country, int jersey)
    {
        this->country = country;
        this->jersey = jersey;
    }
};
int main()
{
    Cricketer* dhoni = new Cricketer("India", 100);
    Cricketer* khoni = new Cricketer("India", 19);
    // khoni->country = dhoni->country;
    // khoni->jersey = dhoni->jersey;
    *khoni = *dhoni;
    delete dhoni;
    cout << khoni->country << " " << khoni->jersey << endl;
    return 0;
}