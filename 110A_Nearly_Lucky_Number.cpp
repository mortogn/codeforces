#include <iostream>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n, lucky = 0;

    cin >> n;

    while (n > 0)
    {
        int lg = n % 10;
        if (lg == 4 || lg == 7)
            lucky++;
        n /= 10;
    }

    if (lucky != 7 && lucky != 4)
        cout << "NO" << "\n";
    else
        cout << "YES" << "\n";

    return 0;
}