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
#define TASK "begin15"
using   namespace   std;
const int maxn=100;
int a,b,ans=0;
bool F[105];
///--------------------------
void    sieve(){
    memset(F,true,sizeof(F));
    for(int i=2;i*i<=maxn;++i)
        if (F[i]) for(int j=i*i;j<=maxn;j+=i) F[j]=false;
}
///--------------------------
bool    check(int A){
    int sum=0;
    while (A>0) sum+=(A%10),A/=10;
    return (F[sum]);
}
///--------------------------
void    solve(){
    sieve();
    cin>>a>>b;
    fo(i,a,b) ans+=check(i);
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




