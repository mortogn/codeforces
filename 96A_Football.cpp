#include <iostream>

using namespace std;

int main()
{
    string input;
    cin >> input;

    int count = 1;

    for (int i = 1; i <= input.length(); i++)
    {

        if (count >= 7)
        {
            cout << "YES" << endl;
            return 0;
        }

        if (input[i] == input[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
    }

    cout << "NO" << endl;

    return 0;
}