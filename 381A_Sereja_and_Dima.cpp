/*
376875958	Jun/01/2026 17:01UTC+6	amorto	381A - Sereja and Dima	C++23 (GCC 14-64, msys2)	Accepted	46 ms	0 KB


Problem: 381A - Sereja and Dima
Rating: 800
Status: Solved
Pattern: greedy, two pointers
Mistake:
    - Used vector erase method (high time complexity)
    - Used vector.end() to erase instead of end() - 1 or pop_back()
Better solution:
    - Use left/right pointer to virtually shrink the array size

*/

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;

    cin >> n;

    vector<int> cards(n);

    for (int i = 0; i < n; i++)
    {
        cin >> cards[i];
    }

    pair<int, int> score = {0, 0};
    bool is_first_turn = true;

    for (int i = 0; i < n; i++)
    {
        int point;

        if (cards.front() > cards.back())
        {
            point = cards.front();
            cards.erase(cards.begin());
        }
        else
        {
            point = cards.back();
            cards.pop_back();
        }

        if (is_first_turn)
            score.first += point;
        else
            score.second += point;

        is_first_turn = !is_first_turn;
    }

    cout << score.first << " " << score.second << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solve();

    return 0;
}