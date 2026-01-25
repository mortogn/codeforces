#include <iostream>

using namespace std;

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, d = 0, a = 0;
    string games;
    cin >> n >> games;

    for (char game : games)
    {
        if (game == 'A')
            a++;
        else
            d++;
    }

    if (d > a)
    {
        cout << "Danik" << "\n";
    }
    else if (d == a)
    {
        cout << "Friendship" << "\n";
    }
    else
    {
        cout << "Anton" << "\n";
    }

    return 0;
}