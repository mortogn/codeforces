#include <iostream>

using namespace std;

int main()
{
    int n, k;

    cin >> n >> k;

    while (k--)
    {
        int lg = n % 10;

        if (lg != 0)
        {
            n--;
        }
        else
        {
            n /= 10;
        }
    }

    cout << n << endl;

    return 0;
}