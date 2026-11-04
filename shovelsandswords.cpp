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
    for (int i=0;i < t;i++){
        int a, b;
        cin >> a >> b;
        cout << min({a, b, (a+b)/3}) << "\n";
    }
    return 0;
}
