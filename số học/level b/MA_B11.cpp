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
#define TASK "MA_B11"
using namespace std;
long long X,Y;
///--------------------------
void    readf(){
    cin >> X >> Y;
}
///--------------------------
void    solve(){
    long long res = 1;
    for(int i = 2; i * i <= Y; ++i) if (Y % i == 0){
        long long tmp = X,powt = 1,powk = 1;
        int k = 0,t = 0;
        while (Y % i == 0){
            k++;
            Y /= i;
            powk *= i;
        }
        while (tmp % i == 0){
            t++;
            tmp /= i;
            powt *= i;
        }
        res = max(res,X / powt * min(powt,powk / i));
    }
    if (Y > 1){
        long long tmp = X,powt = 1,powk = Y;
        int k = 1,t = 0;
        while (tmp % Y == 0){
            t++;
            tmp /= Y;
            powt *= Y;
        }
        res = max(res,X / powt * min(powt,powk / Y));
    }
    cout << res << '\n';
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




