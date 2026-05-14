/*
374537735	May/14/2026 23:55UTC+6	amorto	2200C - Specialty String	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string chars;
        cin >> n >> chars;

        if (n % 2 != 0)
        {
            cout << "NO" << "\n";
            continue;
        };

        int i = 1;
        int n_changed = 0;

        while (true)
        {
            // prev char index without counting the *
            int prev_valid_char = 0;
            bool has_changed = false;

            for (int i = 1; i < n; i++)
            {

                if (chars[i] == '*')
                {
                    continue;
                }

                if (chars[i] == chars[prev_valid_char])
                {
                    chars[i] = chars[prev_valid_char] = '*';
                    has_changed = true;
                    n_changed += 2;
                    break;
                }
                else
                {
                    prev_valid_char = i;
                }
            }

            if (!has_changed)
                break;
        }

        cout << (n_changed == n ? "YES" : "NO") << "\n";
    }

    return 0;
}