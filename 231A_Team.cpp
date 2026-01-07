#include<iostream>

using namespace std;

int main() {
    int t, total = 0;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int a,b,c, score = 0;
        cin >> a >> b >> c;

        if(a == 1) score++;
        if(b == 1) score++;
        if(c == 1) score++;

        if(score >= 2) {
            total++;
        }
    }

    cout << total << endl;

    return 0;
}