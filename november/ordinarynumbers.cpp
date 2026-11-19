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
    for (int i=0;i < t;i++){
        int n;
        cin >> n;
        string p = to_string(n);
        int k = p.size();
        string c(k, p[0]);
        int ans=(9*(k-1)+(p[0]-'1')+(c <= p));
        cout << ans << "\n";
    }
    return 0;
}
