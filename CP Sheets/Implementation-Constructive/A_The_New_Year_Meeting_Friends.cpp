#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define rep(var, start, num) for(int var = start; var < num; var++)
#define all(x) x.begin(), x.end()

void solve() {
      int a[3];
      cin >> a[0] >> a[1] >> a[2];
      sort(a, a+3);
      cout << a[2]-a[1]+a[1]-a[0] << endl;
      
}
signed main() {
    //add quotes incase input output file
    //freopen(input.txt,r,stdin);
    //freopen(output.txt,w,stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}