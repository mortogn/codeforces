
/*

- _Problem_: 799B - T-shirt Buying
- _Rating_: 1400
- _Status_: Rejected (TLE)
- _Pattern_: data structure
- _Mistake_:
        - I think find_if can not be used since it's linear
- _Better Solution_:...
*/

#include <bits/stdc++.h>

using namespace std;

struct Price_Color
{
    int price;
    int front;
    int back;
    int idx;
};

void solve()
{
    unordered_set<int> sold_idx;

    int n;
    cin >> n;

    vector<int> prices;
    vector<int> front_colors;
    vector<int> back_colors;

    // price, front, back
    vector<Price_Color> price_colors;

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

        Price_Color price_color = {price, front_color, back_color, i};

        price_colors.push_back(price_color);
    }

    // sort with price
    sort(price_colors.begin(), price_colors.end(), [](Price_Color price_color1, Price_Color price_color2)
         { return price_color1.price < price_color2.price; });

    int m;
    cin >> m;

    for (int i = 1; i <= m; i++)
    {

        int choice;
        cin >> choice;

        auto it = find_if(price_colors.begin(), price_colors.end(), [choice, sold_idx](Price_Color &price_color)
                          { return (price_color.front == choice ||
                                    price_color.back == choice) &&
                                   !sold_idx.count(price_color.idx); });

        if (it == price_colors.end())
        {
            cout << "-1" << " ";
            continue;
        }

        Price_Color price_color = *it;

        cout << price_color.price << " ";
        sold_idx.insert(price_color.idx);
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
