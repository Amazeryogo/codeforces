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
        ll n,k;
        cin >>n>>k;
        vi q(n);
        for (int i=0;i<n;i++) {cin >> q[i];}
        sort(q.begin(),q.end());
        int p=q[0];int l=1,o=0;
        for (int i=1;i<n;i++){if((q[i]-p)<=k){l++;}else{o=max(o,l);l=1;}p=q[i];}
        cout << (n-max(o,l)) << "\n";
    }
    return 0;
}
