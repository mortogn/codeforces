#include <iostream>
#include <set>

using namespace std;

bool isDistinct(int y)
{
    set<int> digits;

    while (y > 0)
    {
        int ld = y % 10;
        if (!digits.count(ld))
        {
            digits.insert(ld);
        }
        else
        {
            return false;
            break;
        }
        y /= 10;
    }

    return true;
}

int main()
{
    int y, currentY;
    cin >> y;

    currentY = y + 1;

    while (true)
    {
        bool isD = isDistinct(currentY);

        if (isD)
        {
            cout << currentY << endl;
            break;
        }
        else
        {
            currentY++;
        }
    }
}