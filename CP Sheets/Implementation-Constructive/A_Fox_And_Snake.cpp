#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define rep(var, start, num) for (int var = start; var < num; var++)
#define all(x) x.begin(), x.end()

void solve()
{
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i % 2 == 0)
            {
                cout << "#";
            }
            else
            {
                if (i % 4 == 1 && j == m - 1)
                {
                    cout << "#";
                }
                else if (i % 4 == 3 && j == 0)
                {
                    cout << "#";
                }
                else
                {
                    cout << ".";
                }
            }
        }
        cout << endl;
    }
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