/* 361404180	Feb/04/2026 18:11UTC+6	amorto	266B - Queue at the School	C++23 (GCC 14-64, msys2)	Accepted	92 ms	0 KB */

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, t;
    string order;

    cin >> n >> t >> order;

    vector<int> swappedIndex(n, false);

    for (int i = 0; i < t; i++)
    {
        for (int j = 1; j < n; j++)
        {

            if (swappedIndex[j] || swappedIndex[j - 1])
                continue;

            if (order[j - 1] == 'B' && order[j] == 'G')
            {
                swappedIndex[j - 1] = true;
                swappedIndex[j] = true;
                swap(order[j - 1], order[j]);
            }
        }

        swappedIndex.assign(n, false);
    }

    cout << order << endl;

    return 0;
}