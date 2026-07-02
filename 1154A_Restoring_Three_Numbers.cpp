/*
381055883	Jul/02/2026 23:27UTC+6	amorto	1154A - Restoring Three Numbers	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB
*/

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    vector<int> nums(4);

    for (int &num : nums)
    {
        cin >> num;
    }

    sort(nums.begin(), nums.end(), [](const int &a, const int &b)
         { return a > b; });

    int a = nums[0] - nums[1];
    int b = nums[0] - nums[2];
    int c = nums[0] - nums[3];

    cout << a << " " << b << " " << c << " " << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}