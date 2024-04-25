#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define rep(var, start, num) for (int var = start; var < num; var++)
#define all(x) x.begin(), x.end()

void solve()
{
    int n;
    cin >> n;
    int num = 0;
    vector<pair<int, int>> v;
    int i = 0;
    while (n)
    {
        int temp = n % 10;
        if (temp)
            v.pb({temp, i});
        if (temp)
        {
            num++;
        }
        n /= 10;
        i++;
    }
    reverse(all(v));
    cout << num << endl;
    for (auto x : v)
    {
        cout << x.first * pow(10, x.second) << " ";
    }
    cout << endl;
}

signed main()
{
    // add quotes incase input output file
    // freopen(input.txt,r,stdin);
    // freopen(output.txt,w,stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
}