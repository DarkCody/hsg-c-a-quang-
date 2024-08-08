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
#define TASK "begin20"
using   namespace   std;
LL  K,dau,cuoi,mid,ans;
///--------------------------
LL  cal(LL X,LL P){
    LL  sum=0;
    while (X>0){
        sum+=(X/P);
        X/=P;
    }
    return sum;
}
///--------------------------
void    solve(){
    scanf("%lld",&K);
    dau=1;cuoi=1e16;
    while (dau<=cuoi){
        mid=(dau+cuoi)>>1;
        if (cal(mid,5)>=K){
            ans=mid;
            cuoi=mid-1;
        }else dau=mid+1;
    }
    printf("%lld\n",ans);
}
///--------------------------
int     main(){
    #ifndef ONLINE_JUDGE
    	freopen(TASK".inp", "r", stdin);
    	freopen(TASK".out", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
}




