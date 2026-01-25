#include <iostream>

using namespace std;

int main()
{
    int n, h, rw = 0;

    cin >> n >> h;

    for (int i = 0; i < n; i++)
    {
        int tempf;
        cin >> tempf;

        if (tempf <= h)
        {
            rw++;
        }
        else
        {
            rw += 2;
        }
    }

    cout << rw << endl;

    return 0;
}