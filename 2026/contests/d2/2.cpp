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
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c=0;
        for (int i = 0; i < (n-1); i++) {
            if (s[i] == s[i+1]){
                c++;
            }
        }
        if (s[0] == 'B'){c++;}
        cout << c << "\n";
    }
    return 0;
}
