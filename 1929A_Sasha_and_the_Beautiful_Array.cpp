/*
377930283	Jun/09/2026 20:49UTC+6	amorto	1929A - Sasha and the Beautiful Array	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB

Problem: 1929A - Sasha and the Beautiful Array
Rating: 800
Status: Accepted
Pattern: greedy, math, sorting
Mistake:
Better solution:
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

        vector<long long> nums(n);

        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }

        sort(nums.begin(), nums.end());

        long long beauty_score = 0;

        for (int i = 1; i < n; i++)
        {
            int current_score = nums[i] - nums[i - 1];
            beauty_score += current_score;
        }

        cout << beauty_score << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}