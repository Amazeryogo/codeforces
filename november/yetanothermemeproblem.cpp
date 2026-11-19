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
        ll A,B;
        cin >> A >> B;
        ll k=0;
        for (ll b=9;b<=B;b=(((b*10LL)+9LL))){k+=A;}
        cout << k << "\n";
    }
    return 0;
}
