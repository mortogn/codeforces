/*
373427120	May/03/2026 20:37UTC+6	amorto	1742A - Sum	C++23 (GCC 14-64, msys2)	Accepted	46 ms
*/

#include <iostream>

using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int a, b, c;

        cin >> a >> b >> c;

        if (b + c == a || a + b == c || c + a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}