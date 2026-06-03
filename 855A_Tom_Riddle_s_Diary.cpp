/*
377058283	Jun/03/2026 01:24UTC+6	amorto	855A - Tom Riddle's Diary	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB
*/

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    unordered_map<string, bool> nameIndex;

    while (n--)
    {
        string temp;
        cin >> temp;

        if (nameIndex.count(temp))
        {
            cout << "YES" << "\n";
            continue;
        }

        cout << "NO" << "\n";
        nameIndex[temp] = true;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}