#include<iostream>

using namespace std;

int main() {
    int d, step = 0;
    cin >> d;

    if(d >= 5) {
        step += d / 5;
        d %= 5;
    }

    if(d > 0) step++;

    cout << step << endl;

    return 0;
}