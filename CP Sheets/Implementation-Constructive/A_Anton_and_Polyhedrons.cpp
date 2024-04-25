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
    int ans = 0;
    while (n--)
    {
        string s;
        cin >> s;
        if (s == "Icosahedron")
        {
            ans += 20;
            continue;
        }
        else if (s == "Tetrahedron")
        {
            ans += 4;
            continue;
        }
        else if (s == "Cube")
        {
            ans += 6;
            continue;
        }
        else if (s == "Octahedron")
        {
            ans += 8;
            continue;
        }
        else if (s == "Dodecahedron")
        {
            ans += 12;
            continue;
        }
    }
    cout << ans << endl;
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
    // cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        solve();
    }
}