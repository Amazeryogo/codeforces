#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    const ll INF = LLONG_MAX;
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vll a(n + 1, 0);
        ll tot = 0;
        for (int j = 1; j <= n; j++) { cin >> a[j]; tot += a[j]; }
        if (n == 1) { cout << a[1] << "\n"; continue;}
        vll L(n + 1, 0), R(n + 1, 0);
        bool f = false;
        for (int j = 1; j <= n; j++) {
            if (j == 1){L[j] = 0};
            else if(f){L[j] = 1};
            else if (a[1] >= 2){L[j] = j - 1};
            else{L[j] = INF};
            if (j >= 2 && a[j] >= 2){f = true};
        }

        f = false;
        for (int j = n; j >= 1; j--) {
            if (j == n){R[j] = 0};
            else if (f){R[j] = 1};
            else if (a[n] >= 2){R[j] = n - j};
            else{R[j] = INF};
            if (j <= n - 1 && a[j] >= 2){f = true};
        }
        ll best = -1;
        for (int j = 1; j <= n; j++){if (L[j] != INF && R[j] != INF){best = max(best, tot -(L[j]+R[j]))}};
        cout << best << "\n";
    }
    return 0;
}
