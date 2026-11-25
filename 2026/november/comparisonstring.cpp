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
    while (t--) {
        int n;
        str s;
        cin >> n >> s;
        int a=1,b=1;
        for (int i=1;i<n;i++) {
            if (s[i] == s[i-1]){a++;}
            else{a=1;}
            b=max(b,a);
        }
        cout << (b+1) << '\n';
    }

    return 0;
}
