#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using uix = unsigned int;
using str = string;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        // basically get a pivot point a[0], then make a sum counter, if sum%k or (sum-pivot)%3, then increment one, then change pivot to +2
        int n,k; cin >> n >> k;
        vi a(n);
        for (auto &x:a){cin >> x};

        for (int i=0;i < a.size();){

        }
    }
    return 0;
}
