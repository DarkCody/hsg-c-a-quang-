#include<bits/stdc++.h>
#define ll long long
#define st string
#define do double
#define bo bool
#define rf return false;
#define rt return true;
#define Quangcode int main()
#define maxn 105
#define fc(i,a,n) for(ll i=a;i<=n;i++)
#define ft(i,a,n) for(ll i=a;i>=n;i--)
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
Quangcode
{
freopen("TONGLP.inp","r",stdin);
freopen(".out","w",stdout);
 FASTER
 ll a,b,T;
 cin>>T;
 while(T--)
 {
 	cin>>a>>b;
 	cout<<(b*b*(b+1)*(b+1)/4-(a*a*(a-1)*(a-1)/4));
 	cout<<endl;
}
return 0;
}
