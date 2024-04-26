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

int lastdig(int n) {
    return (to_string(n)[to_string(n).size()-1]-'0');
}

void solve() {
    int a,b;
    cin>>a>>b;
    int fl = 0;
    rep(i,1,10) {
        if (lastdig(a*i) == b||lastdig(a*i) == 0) {fl=1; cout<<i<<endl; break;}
    }
    if (fl==0) {cout<<10<<endl;}
}
int main() {
    //add quotes incase input output file
    //freopen(input.txt,r,stdin);
    //freopen(output.txt,w,stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1;
    //cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }
}