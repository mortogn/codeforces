#include<iostream>
#include<string>

using namespace std;

int main() {
    int t, count = 0;

    cin >> t;

    for(int i = 0; i < t; i++) {
        string op;

        cin >> op;

        if(op.substr(0, 2) == "++" || op.substr(1, 3) == "++") {
            count++;
        } else {
            count--;
        }
    }

    cout << count << endl;

    return 0;
}