/*
366096120	Mar/10/2026 16:39UTC+6	amorto	486A - Calculating Function	C++23 (GCC 14-64, msys2)	Accepted	46 ms	100 KB
*/

#include <iostream>

using namespace std;

int main()
{
    long long n;

    cin >> n;

    long long result;

    if (n % 2 == 0)
    {
        result = n / 2;
    }
    else
    {
        result = (-n - 1) / 2;
    }

    cout << result << endl;

    return 0;
}