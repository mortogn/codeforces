/*
373391325	May/03/2026 12:46UTC+6	amorto	443A - Anton and Letters	C++23 (GCC 14-64, msys2)	Accepted	31 ms	100 KB
*/

#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int main()
{
    string line;
    getline(cin, line);

    unordered_set<char> characters;

    int char_count = 0;

    for (char c : line)
    {

        if (!characters.count(c))
        {

            if (c != '{' && c != '}' && c != ',' && c != ' ')
            {
                char_count++;

                characters.insert(c);
            }
        }
    }

    cout << char_count << endl;

    return 0;
}