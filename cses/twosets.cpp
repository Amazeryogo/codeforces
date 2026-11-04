#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

int main() {

    ll n;
    if (cin >> n) {
        ll sum = n * (n + 1) / 2;
        if (sum % 2 != 0) {cout << "NO\n";}
        else{
        cout << "YES\n";
        vi s1;vi s2;ll o = sum / 2;
        for (int i = n; i >= 1; --i) {if (i <= o) {s1.push_back(i);o -= i;} else {s2.push_back(i);}}

        cout << s1.size() << "\n";
        for (int num : s1) {cout << num << " ";}
        cout << "\n";

        cout << s2.size() << "\n";
        for (int num : s2) {cout << num << " ";}
        cout << "\n";
        }
    }
    return 0;
}
