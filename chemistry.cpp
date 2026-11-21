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
        int n,k,j=0;
        str s;
        cin >> n >> k >> s;
        int o[26]={};
        for (char c:s) {o[c - 'a']++;}
        for (int i = 0; i < 26; i++) {if (o[i] % 2 != 0) {j++;}}
        if (j<=(k+1)){cout << "YES"<< "\n";}
        else{cout << "NO" << "\n";}
    }
    return 0;
}
