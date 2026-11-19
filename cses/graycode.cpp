#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using uix = unsigned int;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    uix t = 1u << n;
    for (uix i = 0; i < t; i++) {
        string b = bitset<32>(i^(i>> 1)).to_string().substr(32 - n);
        cout << b << "\n";
    }

    return 0;
}
