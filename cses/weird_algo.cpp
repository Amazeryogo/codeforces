#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;
using vi = vector<int>;
using vll = vector<ll>;
int main(){
  long long x;
  cin >> x;
  cout << x << " ";
  ll  i = x;
  while (i > 1) {
    if (i%2 == 0){i = i/2;} else{i = (3*i + 1);} cout << i << " ";}
  cout << "\n";
  return 0;
}
