#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
    string s;

    cin >> s;

    int upperCount = 0;

    for (char c : s)
    {
        if (toupper(c) == c)
        {
            upperCount++;
        }
    }

    if (s.length() - upperCount >= upperCount)
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    else
        transform(s.begin(), s.end(), s.begin(), ::toupper);

    cout << s << endl;

    return 0;
}