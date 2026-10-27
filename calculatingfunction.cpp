#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    ll t;
    cin >> t;
    if (t % 2 == 0){cout << t / 2 << "\n";}else{cout << -(t + 1) / 2 << "\n";};
    return 0;
}
