/*
380677825	Jun/30/2026 15:55UTC+6	amorto	2236A - Games on the Train	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB
*/

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        int max = -1;
        int min = INT_MAX;

        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;

            if (temp > max)
                max = temp;

            if (temp < min)
                min = temp;
        }

        cout << (max - min + 1) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}