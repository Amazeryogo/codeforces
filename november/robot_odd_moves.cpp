#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
using uix = unsigned int;
using str = string;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--){
        int x, y;
        cin >> x >> y;
        if(x==0&&y==0){cout<<0<<'\n';}
        else if(x<0){cout<<-1<<'\n';}
        else if(abs(y)<=x && (x-abs(y)) % 2 == 0){cout<<x<<'\n';}
        else if(abs(y) <= (x+1) && ((x+1)-abs(y))%2==0){cout<<(x+1)<<'\n';}
        else {cout<<-1<<'\n';}
    }
    return 0;
}
