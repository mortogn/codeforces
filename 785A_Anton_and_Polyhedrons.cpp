/*
373391976	May/03/2026 12:55UTC+6	amorto	785A - Anton and Polyhedrons	C++23 (GCC 14-64, msys2)	Accepted	265 ms	100 KB
*/

#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    int n;
    cin >> n;

    unordered_map<string, int> map = {
        {"Tetrahedron", 4},
        {"Cube", 6},
        {"Octahedron", 8},
        {"Dodecahedron", 12},
        {"Icosahedron", 20},
    };

    int total = 0;

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;

        total += map[temp];
    }

    cout << total << endl;

    return 0;
}