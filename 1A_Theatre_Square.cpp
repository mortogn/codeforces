/*
377915870	Jun/09/2026 20:05UTC+6	amorto	1A - Theatre Square	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB

Problem: 1A - Theatre Square
Rating: 1000
Status: Accepted
Pattern: math
Mistake:
Better solution:

*/

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    long long h, w, a;
    cin >> h >> w >> a;

    long long h_tiles = h / a + (h % a > 0 ? 1 : 0);
    long long w_tiles = w / a + (w % a > 0 ? 1 : 0);

    cout << (h_tiles * w_tiles) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}