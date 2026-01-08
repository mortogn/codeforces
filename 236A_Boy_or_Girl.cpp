#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input, processed = "";
    cin >> input;

    int dc;

    for (char c : input)
    {
        if (processed.find(c) == string::npos)
        {
            processed += c;
            dc++;
        }
    }

    if (dc % 2 == 0)
        cout << "CHAT WITH HER!" << endl;
    else
        cout << "IGNORE HIM!" << endl;

    return 0;
}