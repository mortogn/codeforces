/*
381671242	Jul/08/2026 10:20UTC+6	amorto	1462A - Favorite Sequence	C++23 (GCC 14-64, msys2)	Accepted	46 ms	100 KB
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

        vector<int> arr(n);
        vector<int> result(n);

        int left = 0, right = n - 1;

        for (int &item : arr)
        {
            cin >> item;
        }

        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
            {
                result[i] = arr[left];
                left++;
            }
            else
            {
                result[i] = arr[right];
                right--;
            }
        }

        for (int item : result)
        {
            cout << item << " ";
        }
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