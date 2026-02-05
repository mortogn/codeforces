/*
361512595	Feb/05/2026 14:30UTC+6	amorto	467A - George and Accommodation	C++23 (GCC 14-64, msys2)	Accepted	31 ms	100 KB
*/

#include <iostream>

using namespace std;

int main()
{
    int n, count = 0;

    cin >> n;

    while (n--)
    {
        int people, capacity;

        cin >> people >> capacity;

        if (capacity - people >= 2)
            count++;
    }

    cout << count << endl;

    return 0;
}