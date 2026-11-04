#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll a(n);
        for (ll &x : a) cin >> x;
        sort(a.begin(), a.end());
        ll m = a[n / 2],c = 0;
        for (long long x : a) c += llabs(x - m);
        cout << c << " " << a[n - 1] - a[0] << "\n";
        }
    return 0;
}
