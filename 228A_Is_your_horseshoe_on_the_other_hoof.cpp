/*
372911291	Apr/29/2026 11:35UTC+6	amorto	228A - Is your horseshoe on the other hoof?	C++23 (GCC 14-64, msys2)	Accepted	62 ms	0 KB
*/

#include <iostream>
#include <set>

using namespace std;

int main()
{
    set<int> shoes;

    int count = 0;

    for (int i = 0; i < 4; i++)
    {
        int shoe;
        cin >> shoe;

        if (!shoes.count(shoe))
        {
            shoes.insert(shoe);
        }
        else
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}