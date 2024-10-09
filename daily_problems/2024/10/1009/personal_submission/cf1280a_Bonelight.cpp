/*
    Bonelight * v *
    20241009：CF,BOOM~~
    No Coding , No Bug
*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define int long long 
#define INF 2e14
#define pii pair<int,int>

void solve(){
    int x; cin >> x;
    string s; cin >> s;
    const int MO = 1e9 + 7;
    auto M = [&](int x){return (x % MO + MO) % MO;};
    int ans = s.size();
    
    for(int i = 0; i < x; i ++){
        ans += M((s[i] - '1') * M(ans - i - 1));
        ans = M(ans);
        if(s.length() <= x){
            string ss = s.substr(i + 1);
            if(s[i] == '2') s += ss;
            if(s[i] == '3') s += ss + ss;
        }
    }
    cout << ans << endl;
}

signed main(){
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("in.txt", "rt", stdin);
    freopen("out.txt", "wt", stdout);
#endif
    int T = 1; cin >> T;
    while(T --){
        solve();
    }
}
