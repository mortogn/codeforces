/*
372974797	Apr/29/2026 22:48UTC+6	amorto	144A - Arrival of the General	C++23 (GCC 14-64, msys2)	Accepted	92 ms	0 KB
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> soldiers(n);
    int time = 0, maxIndex = 0, minIndex = 0;

    for (int i = 0; i < n; i++)
    {

        cin >> soldiers[i];

        if (soldiers[i] > soldiers[maxIndex])
        {
            maxIndex = i;
        }

        if (soldiers[i] <= soldiers[minIndex])
        {
            minIndex = i;
        }
    }

    while (true)
    {
        if (maxIndex != 0)
        {
            swap(soldiers[maxIndex], soldiers[maxIndex - 1]);
            if (minIndex == maxIndex - 1)
                minIndex++;
            maxIndex--;
            time++;
        }

        if (minIndex != n - 1)
        {
            swap(soldiers[minIndex], soldiers[minIndex + 1]);

            if (maxIndex == minIndex + 1)
                maxIndex--;
            minIndex++;
            time++;
        }

        if (maxIndex == 0 && minIndex == n - 1)
            break;
    }

    cout << time << endl;

    return 0;
}