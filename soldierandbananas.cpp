#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll k,n,w;
    cin >> k >> n >> w;
    ll cost = k*(((w)*(w+1))/2);
    cout << max(0,cost - n) << "\n";
    return 0;
}
