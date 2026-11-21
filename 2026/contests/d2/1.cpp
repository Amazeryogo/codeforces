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
        int a,b,c;
        cin >> a >> b >> c;
        int s = a+b+c;
        if (s%3==0 && (a == s/3||b==s/3 ||c==s/3) && (a!=b && a!=c && b!=c) && (abs(a-b) <= 2 && abs(b-c) <= 2 && abs(c-a) <= 2)) {cout << "YES" << "\n";}
        else {cout << "NO" << "\n";}
    }
    return 0;
}
