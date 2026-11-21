#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n;
    cin >> n;
    vll a(n);
    ll sum = 0;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    if (sum % 3 != 0) {
        cout << 0 << '\n';
        return 0;
    }
    ll t=(sum/3);ll p=0;ll c=0;ll k=0;
    for (ll i=0;i<(n-1); i++) {
        p += a[i];
        if (p == 2*t) {k+=c;}
        if (p == t) {c++;}
    }
    cout << k << '\n';
    return 0;
}
