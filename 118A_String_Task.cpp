/*
376877017	Jun/01/2026 17:11UTC+6	amorto	118A - String Task	C++23 (GCC 14-64, msys2)	Accepted	92 ms	0 KB

Problem: 118A - String Task
Rating: 800
Status: Accepted
Pattern: strings
Mistake:
    - used unordered_set for such a small number of characters
    - used tolower without static_cast and unsigned
Better solution:
    - use a string to hold the vowels and use find the character (linear)
    - enforce proper static_cast and unsigned with tolower to avoid hidden bugs (best practice)
*/

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    string input, output = "";
    cin >> input;

    unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'y'};

    for (char c : input)
    {
        char current_char = tolower(c);

        if (!vowels.count(current_char))
        {
            output += '.';
            output += current_char;
        }
    }

    cout << output << '\n';
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}