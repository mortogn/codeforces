/*
381673422	Jul/08/2026 10:48UTC+6	amorto	2060C - Game of Mathletes	C++23 (GCC 14-64, msys2)	Accepted	78 ms	0 KB
*/

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        vector<int> arr(n);

        for (int &item : arr)
        {
            cin >> item;
        }

        sort(arr.begin(), arr.end());

        int left = 0, right = n - 1;
        int score = 0;

        for (int i = 0; i < n; i++)
        {

            if (left >= right)
                break;

            if (arr[left] + arr[right] == k)
            {
                score++;
                left++;
                right--;
                continue;
            }

            if (arr[left] + arr[right] > k)
            {
                right--;
            }
            else
            {
                left++;
            }
        }

        cout << score << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}