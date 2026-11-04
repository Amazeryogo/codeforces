#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t, z = 0;
    cin >> t;
    while (t) {t /= 5;z += t;}
    cout << z << "\n";
    return 0;
}
