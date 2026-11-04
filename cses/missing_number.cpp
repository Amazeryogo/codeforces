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
    ll sum = n * (n + 1) / 2;
    for (int i = 0; i < n - 1; i++) {
        ll x;
        cin >> x;
        sum -= x;
    }
    cout << sum << "\n";
}
