#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
const ll MOD = 1000000007;

ll p(ll a, ll b) {
    ll r = 1;
    while (b > 0) {if (b % 2 != 0){r= r*a % MOD;}a=a*a% MOD;b >>= 1;}return r;}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    cout << p(2,t)%MOD << "\n";

    return 0;
}
