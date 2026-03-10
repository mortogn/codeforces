/*
366137760	Mar/10/2026 22:06UTC+6	amorto	200B - Drinks	C++23 (GCC 14-64, msys2)	Accepted	92 ms	0 KB
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int n;

    cin >> n;

    double total = 0;

    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;

        total += p;
    }

    double result = (total / n);

    cout << fixed << setprecision(12) << result << endl;

    return 0;
}