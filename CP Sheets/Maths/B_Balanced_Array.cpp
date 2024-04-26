#include <bits/stdc++.h>
using namespace std;
//author: von_Braun
#define ll long long
#define lli long long int
#define pb push_back
#define rep(var, start, num) for(ulli var = start; var <start + num; var++)
#define all(x) x.begin(), x.end()
#define ulli unsigned long long int
#define ull unsigned long long
bool sortbysec(const pair<ll,ll> &a,const pair<ll,ll> &b) { return (a.second < b.second); }

void solve() {
    int n;
    cin>>n;
    int z = n/2;
    if (z%2) {
        cout<<"NO\n";
    } else {
        cout<<"YES\n";
        vector<int> ans;
        for(int i =2;i<=2*z;i+=2) {ans.push_back(i);}
        rep(i,0,z) {
            if (i<z/2) {ans.pb(ans[i]-1);} else {ans.pb(ans[i]+1);}
        }
        for(auto x:ans ) {cout<<x<<" ";} cout<<endl;
    }
}
int main() {
    //add quotes incase input output file
    //freopen(input.txt,r,stdin);
    //freopen(output.txt,w,stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}