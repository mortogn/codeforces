/* 361402121	Feb/04/2026 17:53UTC+6	amorto	1030A - In Search of an Easy Problem	C++23 (GCC 14-64, msys2)	Accepted	31 ms	100 KB
 */
#include <iostream>

using namespace std;

int main()
{
    int n, isHard = 0;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;

        if (temp == 1)
        {
            isHard = 1;
            break;
        }
    }

    if (isHard)
        cout << "HARD" << endl;
    else
        cout << "EASY" << endl;

    return 0;
}