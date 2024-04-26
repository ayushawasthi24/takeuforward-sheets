#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define rep(var, start, num) for(int var = start; var < num; var++)
#define all(x) x.begin(), x.end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    rep(i, 0, n) cin >> a[i];

    int maxIndex = 0;
    int minIndex = 0;
    rep(i, 0, n) {
        if (a[i] > a[maxIndex]) {
            maxIndex = i;
        }
        if (a[i] <= a[minIndex]) {
            minIndex = i;
        }
    }

    int ans = 0;
    if (maxIndex == 0 && minIndex == n - 1) {
        ans = 0;
    } else if (maxIndex == 0 && minIndex != n - 1) {
        ans = n - 1 - minIndex;
    } else if (maxIndex != 0 && minIndex == n - 1) {
        ans = maxIndex;
    } else {
        ans = maxIndex + n - 1 - minIndex;
        if (maxIndex > minIndex) {
            ans--;
        }
    }
    
    cout << ans << endl;
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
