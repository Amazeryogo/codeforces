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
    for (int i=0;i <= t;i++){
        ll x, y, z;
        cin >> x >> y >> z;
        ll p = x+y+z;
        if (x >= y){
            for (int j=0;i < p;i++){cout << "P";}
            cout << "\n";
        }else if (y >= z){
            for (int j=0;i < p;i++){cout << "R";}
            cout << "\n";
        }else {
            for (int j=0;i < p;i++){cout << "S";}
            cout << "\n";
        }
    }
    return 0;
}
