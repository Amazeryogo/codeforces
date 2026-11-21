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
        ll n;
        cin >> n;
        int tw=0,th=0;
        while (n % 2 == 0){n /= 2;tw++;}
        while (n % 3 == 0){n /= 3;th++;}
        if (n!=1||tw>th) {cout << -1 << '\n';} else {cout << (2*th)-tw<< '\n';}
    }
    return 0;
}
