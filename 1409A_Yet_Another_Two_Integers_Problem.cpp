/*
381643190	Jul/08/2026 00:39UTC+6	amorto	1409A - Yet Another Two Integers Problem	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB
*/

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;

        int diff = abs(b - a);
        int result = diff / 10;

        if (diff % 10 != 0)
            result++;

        cout << result << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}