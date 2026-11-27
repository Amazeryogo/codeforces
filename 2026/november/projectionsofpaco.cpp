#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using si = stack<int>;
using vb = vector<bool>;
using uix = unsigned int;
using str = string;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll k=0;
        for (int i=0;i<n;i++) {
            ll x;
            cin >> x;
            if (i%2==0){k+= x;}
            else{k-= x;}
        }
        cout << k << '\n';
    }
    return 0;
}
