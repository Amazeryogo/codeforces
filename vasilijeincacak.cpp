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
    while (t--){
        ll n,k,x;
        cin >> n >> k >> x;
        cout << ((k*(k+1)/2)<=x && x<=(k*(2*n-k+1)/2)? "YES" : "NO") << '\n';
    }
    return 0;
}
