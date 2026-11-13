#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using vb = vector<bool>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n; string s;
        cin >> n >> s;
        vb k(26, false);
        for (int j=0; j<(n/2); j++) {
            int p = (s[j]-'a'),q=(s[(n-1)-j]-'a');
            if (p > q){swap(p, q);}
            for (int x=(p+1); x <= q; x++){k[x] = true;}
        }
        int a = 0;
        for (int x=0; x < 26; x++) if (k[x]) a++;
        cout << a << "\n";
    }
    return 0;
}
