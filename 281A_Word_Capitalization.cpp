#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string i;

    cin >> i;

    i[0] = toupper(i[0]);

    cout << i << endl;

    return 0;
}