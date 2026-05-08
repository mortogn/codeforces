/*
373939325	May/08/2026 23:22UTC+6	amorto	1873C - Target Practice	C++23 (GCC 14-64, msys2)	Accepted	31 ms	0 KB
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int t;
    cin >> t;

    vector<vector<int>> point_arr = {
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
        {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
        {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
        {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
        {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    };

    while (t--)
    {

        int total_point = 0;

        for (int i = 0; i < 10; i++)
        {

            for (int s = 0; s < 10; s++)
            {
                char c;
                cin >> c;

                if (c == 'X')
                {
                    total_point += point_arr[i][s];
                }
            };
        }

        cout << total_point << endl;
    }

    return 0;
}
