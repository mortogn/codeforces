/*
373055785	Apr/30/2026 17:42UTC+6	amorto	996A - Hit the Lottery	C++23 (GCC 14-64, msys2)	Accepted	46 ms	100 KB
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int total = 0;

    total += n / 100;
    n %= 100;

    total += n / 20;
    n %= 20;

    total += n / 10;
    n %= 10;

    total += n / 5;
    n %= 5;

    total += n;

    cout << total << endl;

    return 0;
}