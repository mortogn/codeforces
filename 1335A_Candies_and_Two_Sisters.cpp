/*
373426539	May/03/2026 20:30UTC+6	amorto	1335A - Candies and Two Sisters	C++23 (GCC 14-64, msys2)	Accepted	46 ms	100 KB
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long n;
        cin >> n;

        if (n < 3)
        {
            cout << 0 << endl;
            continue;
        }

        cout << (((n + 1) / 2) - 1) << endl;
    }

    return 0;
}