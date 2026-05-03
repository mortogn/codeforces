/*
373334750	May/02/2026 20:14UTC+6	amorto	160A - Twins	C++23 (GCC 14-64, msys2)	Accepted	62 ms	100 KB
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, sum = 0;

    cin >> n;

    vector<int> coins(n);

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
        sum += coins[i];
    }

    sort(coins.begin(), coins.end(), [](int a, int b)
         { return a > b; });

    int coin_value = 0, coin_count = 0;
    for (int i = 0; i < n; i++)
    {
        if (coin_value > sum / 2)
            break;

        coin_count++;
        coin_value += coins[i];
    }

    cout << coin_count << endl;

    return 0;
}