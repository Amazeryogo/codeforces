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
    for (int i=0;i < t;i++){
        int n;
        cin >> n;
        vi h(n);
        for (int& x : h){cin >> x;}
        sort(h.begin(), h.end());
        vi l,m,r;
        for (int j = 0; j < n; j++) {
            int s=0;
            if (j >= 1 && h[j-1] == h[j]){s++;}
            if (j >= 2 && h[j-2] == h[j]){s++;}
            if (s==0){l.push_back(h[j]);}
            else if (s==1){r.push_back(h[j]);}
            else {m.push_back(h[j]);}}
            reverse(r.begin(), r.end());
            int k=(l.size() + r.size());
            cout << k << "\n";
            for (int x : l){cout << x << " ";}
            for (int x : m){cout << x << " ";}
            for (int x : r){cout << x << " ";}
            cout << "\n";
    }
    return 0;
}
