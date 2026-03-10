/*
366096979	Mar/10/2026 16:46UTC+6	amorto	344A - Magnets	C++23 (GCC 14-64, msys2)	Accepted	218 ms	0 KB
*/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int group = 0;
    int prevMagnet = 0;

    for (int i = 0; i < n; i++)
    {
        int magnet;
        cin >> magnet;

        if (prevMagnet == 0)
        {
            prevMagnet = magnet;
            group++;
            continue;
        }
        if (prevMagnet != magnet)
        {
            group++;
            prevMagnet = magnet;
        }
    }

    cout << group << endl;

    return 0;
}