#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;

bool d(int num){
    int d0 = (num / 1000) % 10;
    int d1 = (num / 100) % 10;
    int d2 = (num / 10) % 10;
    int d3 = num % 10;
    return ((d0 != d1) && (d0 != d2) && (d0 != d3) &&(d1 != d2) && (d1 != d3) &&(d2 != d3));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int k=t+1;k <= 9999; k++){
        if (d(k) == true){
            cout << k << "\n";
            break;
        }
    }
    return 0;
}
