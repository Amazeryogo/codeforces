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
    ll prev=0,r=0;
    for (int i=0;i < t;i++){
        ll k;
        cin >> k;
        if (prev >= k) {r=r+(prev-k);}
        prev = max(prev,k);
    }
    cout << r << "\n";
    return 0;
}
