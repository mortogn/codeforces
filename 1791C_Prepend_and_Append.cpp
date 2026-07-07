/*
381645284	Jul/08/2026 01:12UTC+6	amorto	1791C - Prepend and Append	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB
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
        string s;
        cin >> n >> s;

        int length = n;
        int left = 0, right = n - 1;

        for (int i = 0; i < n; i++)
        {
            if (right <= left)
                break;

            if (s[left] != s[right])
            {
                length -= 2;
                left++;
                right--;
            }
            else
                break;
        }

        cout << length << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}