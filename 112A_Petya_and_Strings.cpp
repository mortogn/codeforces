#include <iostream>
#include <algorithm>
#include <cstring>
#include <string>

using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    transform(a.begin(), a.end(), a.begin(), ::tolower);
    transform(b.begin(), b.end(), b.begin(), ::tolower);

    int cmp = strcmp(a.c_str(), b.c_str());

    if (cmp > 0)
        cmp = 1;
    if (cmp < 0)
        cmp = -1;

    cout << cmp << endl;

    return 0;
}