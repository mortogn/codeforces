#include <iostream>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int left = 0;

    set<int> eachStationLeft;

    while (n--)
    {
        int exit, enter;

        cin >> exit >> enter;

        left = (left - exit) + enter;

        eachStationLeft.insert(left);
    }

    cout << *eachStationLeft.rbegin() << endl;

    return 0;
}