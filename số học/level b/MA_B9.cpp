#include    <bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<=b;++i)
#define fd(i,a,b) for(int i=a;i>=b;--i)
#define rep(i,a,b)  for(int i=a;i<b;++i)
#define fore(i,a)  for(__typeof(a.begin()) i=a.begin();i!=a.end();++i)
#define __unique(V) V.resize(unique(V.begin(),V.end())-V.begin())
#define cntbit(X)   __builtin_popcount(X)
#define fi  first
#define se  second
#define LL  long long
#define ii  pair<int,int>
#define iii pair<int,ii>
#define TASK "begin19"
using   namespace   std;
LL  a,b;
int T;
///--------------------------
void    solve(){
    scanf("%d",&T);
    while (T--){
        scanf("%lld%lld",&a,&b);
        printf("%lld\n",(b*b*(b+1)*(b+1))/4-(a*a*(a-1)*(a-1))/4);
    }
}
///--------------------------
int     main(){
    #ifndef ONLINE_JUDGE
    	freopen(TASK".inp", "r", stdin);
    	freopen(TASK".out", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
}




