#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using str = string;


int main() {
    int t;
    cin >> t;

    while (t--) {
        int m, n;
        str p, q;
        cin >> m >> n >> p >> q;

        str o = "";
        for (char j : p) {
            size_t pos = q.find(j);
            if (pos != str::npos) q.erase(pos, 1);
            else o += j;
        }
        sort(o.begin(), o.end());
        if (q.empty() && o == "isx"){ cout << "YES\n";}
        else{ cout << "NO\n";}
    }
}
