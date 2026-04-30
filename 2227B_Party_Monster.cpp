/*
373129534	Apr/30/2026 21:40UTC+6	amorto	2227B - Party Monster	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string s;

        cin >> n >> s;

        if (n % 2 != 0)
        {
            cout << "NO" << endl;
            continue;
        }

        int left_bracket_count = 0, right_bracket_count = 0;

        for (char c : s)
        {
            if (c == '(')
                left_bracket_count++;
            else
                right_bracket_count++;
        }

        if (left_bracket_count == right_bracket_count)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}