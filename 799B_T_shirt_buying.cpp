/*
377105912	Jun/03/2026 15:04UTC+6	amorto	799B - T-shirt buying	C++23 (GCC 14-64, msys2)	Time limit exceeded on test 6	3000 ms	900 KB

- _Problem_: 799B - T-shirt Buying
- _Rating_: 1400
- _Status_: Upsolved
- _Pattern_: data structure
- _Mistake_:
- _Upsolved_solution_:
    - used map and index to quickly look up prices
    - removed find_if because that was linear
    - used vector instead of set to get vec[i] in O(1).
*/

#include <bits/stdc++.h>

using namespace std;

void solve()
{
    unordered_set<int> sold_price;
    map<int, vector<int>> color_to_prices;
    map<int, int> color_idx_sold = {
        {1, 0},
        {2, 0},
        {3, 0}};

    int n;
    cin >> n;

    vector<int> prices;
    vector<int> front_colors;
    vector<int> back_colors;

    // take price, front_color, back_color input
    for (int i = 0; i < n * 3; i++)
    {
        int temp;
        cin >> temp;

        if (i < n)
        {
            prices.push_back(temp);
        }
        else if (i < n * 2)
        {
            front_colors.push_back(temp);
        }
        else
        {
            back_colors.push_back(temp);
        }
    }

    // set price_color vector
    for (int i = 0; i < n; i++)
    {
        int price = prices[i];
        int front_color = front_colors[i];
        int back_color = back_colors[i];

        color_to_prices[front_color].push_back(price);
        color_to_prices[back_color].push_back(price);
    }

    sort(color_to_prices[1].begin(), color_to_prices[1].end());
    sort(color_to_prices[2].begin(), color_to_prices[2].end());
    sort(color_to_prices[3].begin(), color_to_prices[3].end());

    int m;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {

        int choice;
        cin >> choice;

        // Just in case the color does not exist
        if (!color_to_prices.count(choice))
        {
            cout << "-1" << " ";
        };

        int price;

        while (true)
        {
            if (color_to_prices[choice].size() <= color_idx_sold[choice])
            {
                price = -1;
                break;
            }

            price = color_to_prices[choice][color_idx_sold[choice]];

            if (!sold_price.count(price))
            {
                sold_price.insert(price);
                break;
            }
            else
            {
                color_idx_sold[choice] += 1;
            }
        }

        cout << price << " ";
    }

    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}
