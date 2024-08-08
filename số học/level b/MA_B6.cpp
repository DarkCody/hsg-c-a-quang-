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
#define TASK "begin16"
using   namespace   std;
LL  n;
///--------------------------
LL cnt(LL N,LL P){
    LL sum=0;
    while (N>0){
        sum+=(N/P);
        N/=P;
    }
    return sum;
}
///--------------------------
void    solve(){
    cin>>n;
    cout<<cnt(n,5)<<'\n';
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




