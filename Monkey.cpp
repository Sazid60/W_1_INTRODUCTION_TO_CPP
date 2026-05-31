#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;

    while (getline(cin, s)) {
        string t = "";

        for (char c : s) {
            if (c != ' ') t += c;
        }

        sort(t.begin(), t.end());
        cout << t << endl;
    }

    return 0;
}