/*
381643481	Jul/08/2026 00:44UTC+6	amorto	2009A - Minimize!	C++23 (GCC 14-64, msys2)	Accepted	15 ms
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

        cout << (b - a) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}