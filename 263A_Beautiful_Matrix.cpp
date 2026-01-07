#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int row, col;

    for (int i = 1; i <= 25; i++)
    {
        int input;
        cin >> input;

        if (input != 0)
        {
            col = i % 5;
            row = i / 5;
            if (col > 0)
                row++;
            if (col == 0)
                col = 5;
        }
    }

    cout << abs(row - 3) + abs(col - 3) << endl;

    return 0;
}