/*
372934628	Apr/29/2026 16:44UTC+6	amorto	520A - Pangram	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB
*/

#include <iostream>
#include <cctype>
#include <set>

using namespace std;

int main()
{
    int n;
    string chars;

    cin >> n >> chars;

    if (n < 26)
    {
        cout << "NO" << endl;
    }
    else
    {

        set<char> uniqueChars;

        for (char c : chars)
        {
            uniqueChars.insert(tolower(c));
        }

        if (uniqueChars.size() >= 26)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}