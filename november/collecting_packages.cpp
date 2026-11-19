#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using coords = vector<pair<int,int>>;
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
        int n,x=0,y=0;str ans;bool k=true;
        cin >> n;
        coords p(n);
        for (int i=0; i<n;i++){cin>>p[i].first>>p[i].second;}
        sort(p.begin(), p.end());
        for (auto [a,b]:p) {
            if (a<x||b<y) {k=false;break;}
            ans += str(a-x,'R');
            ans += str(b-y,'U');
            x=a;y=b;
        }
        if (k){cout << "YES\n"<<ans<<'\n';}else{cout<<"NO\n";}
    }
    return 0;
}
