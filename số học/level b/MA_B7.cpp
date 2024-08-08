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
#define TASK "begin17"
using   namespace   std;
LL  n,kq1,kq2;
///--------------------------
bool    check(LL X){
    return (sqrt(X)==trunc(sqrt(X)));
}
///--------------------------
void    solve(){
    cin>>n;
    kq1=0;
    for(LL i=1;i*i<=n;++i)
    if (n%i==0){
        if (check(i)) kq1=max(kq1,i);
        if (check(n/i)) kq1=max(kq1,n/i);
    }
    kq2=n/kq1;
    kq1=trunc(sqrt(kq1));
    cout<<kq1<<' '<<kq2<<'\n';
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




