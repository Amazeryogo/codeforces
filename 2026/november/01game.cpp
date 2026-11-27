#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using si = stack<int>;
using vb = vector<bool>;
using uix = unsigned int;
using str = string;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        str s;
        cin >> s;
        int z=0,o=0;
        for (char c : s) {
            if (c == '0'){z++;}
            else{o++;}
        }
        cout << (min(z, o) % 2 ? "DA\n" : "NET\n");
    }
    return 0;
}
