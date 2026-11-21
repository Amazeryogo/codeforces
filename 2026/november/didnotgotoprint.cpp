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
        int n;str s;
        cin >> n >> s;
        si st;
        vb p(n+1,false);

        for (int i=0;i<n;i++) {
            int d=(i+1);
            if (s[i]=='1') {st.push(d);}
            else if (s[i]=='2') {if (st.empty() == false) {p[st.top()] = true;st.pop();}else {p[d]=true;}}
            else {p[d]=true;}
        }
        vi a;
        for (int i=1; i<=n; i++) {
            if (!p[i]) {a.push_back(i);}
        }
        cout<<a.size()<<'\n';
        for (int x : a) {cout<<x<< " ";}
    }
    return 0;
}
