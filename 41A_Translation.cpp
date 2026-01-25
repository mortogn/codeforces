#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    string s, t, tempRev;

    cin >> s >> t;

    for (int i = s.length() - 1; i != -1; i--)
    {
        tempRev += s[i];
    }

    if (tempRev == t)
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}