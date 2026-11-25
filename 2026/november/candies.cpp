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
    ll n,p=4LL;
    cin >> n;
    while (n%(p-1)!= 0) {p *= 2;}
    cout << n/(p-1)<< '\n';
    }

    return 0;
}
