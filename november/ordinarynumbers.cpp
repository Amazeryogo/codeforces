#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
bool d(int num){
    if (num < 10) { return true;} 
    string s = to_string(num);
    char k = s[0]; bool r=false;
    for (size_t i = 1; i < s.length() ; ++i) {
        if (s[i] == k)
    }
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
