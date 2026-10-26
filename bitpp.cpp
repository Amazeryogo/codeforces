#include <bits/stdc++.h>
#include <string>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; int k = 0;
    cin >> t;
    for (int i=0;i < t;i++){
        string s;
        cin >> s;
        if (s == "++X" || s == "X++"){ k = k + 1;}
        else if (s == "--X" || s == "X--") { k = k - 1;}
        
    }
    cout << k;
    return 0;
}
