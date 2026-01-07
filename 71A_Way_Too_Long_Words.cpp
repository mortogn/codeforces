#include<iostream>
#include<string>

using namespace std;

int main() {
    int t;
    
    cin >> t;

    for(int i = 0; i < t; i++) {
        string w;
        cin >> w;
        
        if(w.length() <= 10) {
            cout << w << endl;
        } else {
            cout << w.substr(0, 1) << w.length() - 2 << w.substr(w.length() - 1, 1) << endl;
        }
    }

    return 0;
}