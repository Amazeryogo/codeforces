#include<iostream>
#include<string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    if (s.empty()) { cout << 0 << '\n'; return 0; }

    char prev = s[0];
    int k = 1, best = 1;
    for (size_t i = 1; i < s.size(); i++) {
        if (s[i] == prev) k++;
        else { prev = s[i]; k = 1; }
        best = max(best, k);
    }
    cout << best << '\n';
}
