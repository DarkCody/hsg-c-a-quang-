#include    <bits/stdc++.h>
#define fo(i,a,b) for(int i=a;i<=b;++i)
#define fd(i,a,b) for(int i=a;i>=b;--i)
#define rep(i,a,b)  for(int i=a;i<b;++i)
#define fore(i,a)  for(__typeof(a.begin()) i=a.begin();i!=a.end();++i)
#define __unique(V) V.resize(unique(V.begin(),V.end())-V.begin())
#define fi  first
#define se  second
#define LL  long long
#define ii  pair<int,int>
#define iii pair<int,ii>
#define TASK "begin12"
using   namespace   std;
const int maxn=1e7;
bool    F[maxn+5];
int a,b,ans;
///--------------------------
void    sieve(){
    memset(F,true,sizeof(F));
    for(int i=2;i*i<=maxn;++i)
        if (F[i]) for(int j=i*i;j<=maxn;j+=i)
            F[j]=false;
}
///--------------------------
void    solve(){
    sieve();
    cin>>a>>b;
    ans=0;
    fo(i,a,b) ans+=F[i];
    cout<<ans<<'\n';
}
///--------------------------
int     main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    #ifndef ONLINE_JUDGE
    	freopen(TASK".inp", "r", stdin);
    	freopen(TASK".out", "w", stdout);
    #endif // ONLINE_JUDGE
    solve();
}





