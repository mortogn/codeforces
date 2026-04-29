/*
372969813	Apr/29/2026 21:58UTC+6	amorto	469A - I Wanna Be the Guy	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB
*/

#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;

    set<int> levels;

    for (int i = 1; i <= n; i++)
    {
        levels.insert(i);
    }

    int np;

    cin >> np;

    for (int i = 0; i < np; i++)
    {
        int temp;
        cin >> temp;
        levels.erase(temp);
    }

    int nq;

    cin >> nq;

    for (int i = 0; i < nq; i++)
    {
        int temp;
        cin >> temp;
        levels.erase(temp);
    }

    if (levels.size() != 0)
        cout << "Oh, my keyboard!" << endl;
    else
        cout << "I become the guy." << endl;

    return 0;
}