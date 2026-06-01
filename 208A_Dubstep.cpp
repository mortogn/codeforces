/*
376931825	Jun/02/2026 00:48UTC+6	amorto	208A - Dubstep	C++23 (GCC 14-64, msys2)	Accepted	62 ms	0 KB


Problem: 208A - Dubstep
Rating: 900
Status: Accepted
Pattern: strings
Mistake:
    - forgot to initialize `was_last_wub` to false.
    - good practice is to typecast s.size() since it's signed and unsigned.
Better solution:
    - init `was_last_wub` to false.
    - use typecasting with (int)s.size() to follow good practice.
*/

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string s;
    cin >> s;

    string result;

    int left = 0;
    bool was_last_wub = false;

    while (left < (int)s.size())
    {
        string substr = s.substr(left, 3);

        if (substr == "WUB")
        {
            left += 3;
            was_last_wub = true;
        }
        else
        {
            if (was_last_wub && !result.empty() && result.back() != ' ')
                result.push_back(' ');
            result.push_back(s[left]);
            left++;
            was_last_wub = false;
        }
    }

    cout << result << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}