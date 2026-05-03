/*
373394118	May/03/2026 13:27UTC+6	amorto	510A - Fox And Snake	C++23 (GCC 14-64, msys2)	Accepted	31 ms	100 KB
*/

#include <iostream>

using namespace std;

int main()
{
    int col, row;

    cin >> col >> row;

    bool is_left = true;

    for (int i = 1; i <= col; i++)
    {
        for (int j = 1; j <= row; j++)
        {
            if (i % 2 == 0)
            {
                cout << (((is_left && j == row) || (!is_left && j == 1)) ? "#" : ".");
            }
            else
            {
                cout << "#";
            }
        }
        if (i % 2 == 0)
        {
            is_left = !is_left;
        }

        cout << endl;
    }

    return 0;
}