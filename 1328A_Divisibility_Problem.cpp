/*
372918794	Apr/29/2026 13:18UTC+6	amorto	1328A - Divisibility Problem	C++23 (GCC 14-64, msys2)	Accepted	62 ms	0 KB
*/

#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;

        cin >> a >> b;

        if (a % b == 0)
        {
            cout << 0 << endl;
        }
        else if (a < b)
        {
            cout << b - a << endl;
        }
        else
        {
            cout << (b - (a % b)) << endl;
        }
    }

    return 0;
}