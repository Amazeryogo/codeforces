#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll a, b;
    cin >> a >> b;
    ll p = 1;
    while (a != b) {
            if (a > b) {ll k = (a - 1) / b;p += k;a -= k * b;}
            else {ll k = (b - 1) / a;p += k;b -= k * a;}}
        cout << p << '\n';
        return 0;
}
