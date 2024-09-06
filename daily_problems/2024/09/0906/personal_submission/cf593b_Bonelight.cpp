#include <bits/stdc++.h>
using namespace std;
#define int long long
#define uint unsigned long long
#define endl '\n'
#define pii pair<int, int>


void solve()
{
    int n; cin >> n;
    int x1,x2; cin >> x1 >> x2;
    vector<pii> a(n);
    
    for(auto &[x,y]:a) {
        int k,b; cin >> k >> b;
        x = k * x1 + b;
        y = k * x2 + b;
    } 

    sort(begin(a),end(a));
    for(int i = 1; i < n; i ++){
        auto [x1,y1] = a[i - 1];
        auto [x2,y2] = a[i];
        if(y1 > y2){
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}   


signed main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin), freopen("out.txt", "wt", stdout);
#endif
    int T = 1;
    while (T--)
        solve();
}
