/*
373165196	Apr/30/2026 23:42UTC+6	amorto	148A - Insomnia cure	C++23 (GCC 14-64, msys2)	Accepted	62 ms	100 KB
*/

#include <iostream>

using namespace std;

int main()
{
    int k, l, m, n, d;

    cin >> k >> l >> m >> n >> d;

    int damaged_dragon_count = 0;

    for (int i = 1; i <= d; i++)
    {
        if (i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0)
        {
            damaged_dragon_count++;
        }
    }

    cout << damaged_dragon_count << endl;

    return 0;
}