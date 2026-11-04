#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ll n,t;
    cin >> n >> t;
    vi a(n);
    for (int &x : a){cin >> x;}
    ll s = 0, l = 0, b = 0;
    for (int r = 0; r < n; r++) {
        s += a[r];
        while (s > t) s -= a[l++];
        b = max(b, r - l + 1);
    }cout << b << "\n";}
