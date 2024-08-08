#include    <bits/stdc++.h>
#define fo(i,a,b) for(int i=(a);i<=(b);++i)
#define __unique(V) (V).resize(unique((V).begin(),(V).end())-(V).begin())
#define cntbit(X)   __builtin_popcount((X))
#define bit(S,i) (((S)>>(i))&1)
#define PI	acos(-1)
#define fi  first
#define se  second
#define LL  long long
#define ii  pair<int,int>
#define iii pair<int,ii>
#define eb  emplace_back
#define TASK "MA_B12"
using namespace std;
int a;
///--------------------------
void    readf(){
    cin >> a;
}
///--------------------------
void    solve(){
    int mod = 100003;
    int tmp = 1;
    for(int i = 1; i <= a; ++i) tmp = 1ll * tmp * a % (mod - 1);
    int ans = 1;
    for(int i = 1; i <= tmp; ++i) ans = 1ll * ans * a % mod;
    cout << ans << '\n';
}
///--------------------------
int     main(){
	srand(time(NULL));
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #ifdef TLH2203
        freopen(TASK".inp", "r", stdin);
        freopen(TASK".out", "w", stdout);
    #endif // TLH2203
    int T;
    cin >> T;
    while (T--){
        readf();
        solve();
    }
}




