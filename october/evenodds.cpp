#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll n,k;
    cin >> n >> k;
    ll p = (n+1)/2;
    if (k<= p){cout << 2*k -1 << "\n";}else{cout << 2 * (k - p) << "\n";}
    return 0;
}
