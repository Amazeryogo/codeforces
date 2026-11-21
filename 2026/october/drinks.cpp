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
    double a=0;
    for (int i=0;i <t;i++){
        double n;
        cin >> n;
        a+= n;
    }
    cout << a/t << "\n" ;
    return 0;
}
