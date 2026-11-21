#include <bits/stdc++.h>
#include <cstddef>
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
    while (t--){
    int n;
    cin >> n;
    vll a(n);
    for (int i=0;i<n; i++) {cin >> a[i];}
    vll o,e;
     for (int j=0; j< n; j++) {
         if (j % 2 == 0){e.push_back(a[j]);}
         else{o.push_back(a[j]);}
     }
     sort(o.begin(), o.end());
     sort(e.begin(), e.end());
     ll sum = accumulate(a.begin(), a.end(), 0LL);
     for (size_t k=0; k < min(o.size(), e.size()); k++) {
         ll s = o[k] + e[k];
         if (s >= 0){break;}
         sum -= 2 * s;
     }
     cout << sum << "\n";
    }
    return 0;
}
