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
        int n, k;
        cin >> n >> k;
        vi p(n+1, 0);
        int t = 0;
        for (int i=1; i <= n; i++) {
            ll a;
            cin >> a;
            int l = max(1,i-k);
            int f = 1^p[i-1]^p[l-1];
            p[i] = p[i-1]^f;
            if (a & 1){t ^= f;}
        }
        cout << (t ? "Alice" : "Bob") << "\n";
    }
    return 0;
}
