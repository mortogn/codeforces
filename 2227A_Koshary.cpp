/*
373118596	Apr/30/2026 21:20UTC+6	amorto	2227A - Koshary	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB
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

        bool is_a_even, is_b_even;

        is_a_even = a % 2 == 0;
        is_b_even = b % 2 == 0;

        if (is_a_even && is_b_even)
            cout << "YES" << endl;
        else if (!is_a_even && !is_b_even)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}