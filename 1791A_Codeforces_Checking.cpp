/*
381056519	Jul/02/2026 23:33UTC+6	amorto	1791A - Codeforces Checking	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB
*/

#include <bits/stdc++.h>

using namespace std;

bool valid_char(char c)
{
    string codeforces = "codeforces";

    for (char cf : codeforces)
    {
        if (cf == c)
        {
            return true;
        }
    }

    return false;
}

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        char c;
        cin >> c;

        cout << (valid_char(c) ? "YES" : "NO") << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}