#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    for (ll k=1;k <= t;k++){
    ll p = ((k*k)*((k*k)-1)/2) - 4*(k-1)*(k-2);
     cout << p << "\n";
    }
    return 0;
}
