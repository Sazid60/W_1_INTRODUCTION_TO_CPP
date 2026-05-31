#include <bits/stdc++.h>
using namespace std;

struct Student {
    int id;
    string name;
    char section;
    int marks;
};

int main() {
    int T;
    cin >> T;

    while (T--) {
        Student best;

        for (int i = 0; i < 3; i++) {
            Student s;
            cin >> s.id >> s.name >> s.section >> s.marks;

            if (i == 0) {
                best = s;
            } else {
                if (s.marks > best.marks || 
                   (s.marks == best.marks && s.id < best.id)) {
                    best = s;
                }
            }
        }

        cout << best.id << " " << best.name << " "
             << best.section << " " << best.marks << "\n";
    }

    return 0;
}