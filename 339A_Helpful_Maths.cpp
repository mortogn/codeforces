#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;

    vector<int> nums;

    for (char c : s)
    {
        if (c != '+')
        {
            nums.push_back(c - '0');
        }
    }

    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size(); i++)
    {
        if (i == nums.size() - 1)
            cout << nums[i] << endl;
        else
            cout << nums[i] << "+";
    }

    return 0;
}