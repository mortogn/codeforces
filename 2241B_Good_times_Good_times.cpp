/*
380842734	Jul/01/2026 00:52UTC+6	amorto	2241B - Good times Good times	C++23 (GCC 14-64, msys2)	Accepted	31 ms	100 KB
*/

#include <bits/stdc++.h>

using namespace std;

using ll = long long;

ll digit_count(ll x)
{
    int count = 0;
    while (x > 0)
    {
        x /= 10;
        count++;
    }

    return count;
}

void solve()
{
    ll t;
    cin >> t;

    while (t--)
    {
        ll x;
        cin >> x;

        int total_digit = digit_count(x);

        int y = (pow(10, total_digit) + 1);

        cout << y << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}