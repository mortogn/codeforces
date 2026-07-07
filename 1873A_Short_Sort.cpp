/*
381644391	Jul/08/2026 00:57UTC+6	amorto	1873A - Short Sort	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB
*/

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        unordered_set<string> valid = {
            "abc", "acb", "cba", "bac"};

        if (valid.count(s))
            cout << "YES";
        else
            cout << "NO";

        cout << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}