/*
372914659	Apr/29/2026 12:24UTC+6	amorto	705A - Hulk	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB
*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cout << (i % 2 == 0 ? "I love " : "I hate ");
        if (i == n)
        {
            cout << "it";
        }
        else
        {
            cout << "that ";
        }
    }

    cout << endl;

    return 0;
}