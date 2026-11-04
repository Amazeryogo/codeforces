#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
bool d(int num){
    if (num < 10) { return true;}
    { // fix this shit ienbitreobniwert i0r3 iq3 bi0q3ie    bi0 b
    int d0 = (num / 1000) % 10;
    int d1 = (num / 100) % 10;
    int d2 = (num / 10) % 10;
    int d3 = num % 10;
    return ((d0 != d1) && (d0 != d2) && (d0 != d3) &&(d1 != d2) && (d1 != d3) &&(d2 != d3));
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i=0;i < t;i++){
        int count=0,n=0;
        cin >> n;
        for (int j=1; j < n; j++){
            if (d(j)) {count += 1;}
        }
        cout << count;
    }
    return 0;
}
