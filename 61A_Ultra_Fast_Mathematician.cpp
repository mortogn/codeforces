/*
372913796	Apr/29/2026 12:13UTC+6	amorto	61A - Ultra-Fast Mathematician	C++23 (GCC 14-64, msys2)	Accepted	46 ms	100 KB
*/

#include <iostream>

using namespace std;

int main()
{
    string first_numbers, second_numbers;

    cin >> first_numbers >> second_numbers;

    string result;

    for (int i = 0; i < first_numbers.size(); i++)
    {
        if (first_numbers[i] == second_numbers[i])
        {
            result += '0';
        }
        else
        {
            result += '1';
        }
    }

    cout << result << endl;

    return 0;
}