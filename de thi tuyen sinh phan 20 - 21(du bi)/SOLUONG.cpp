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
 freopen("SOLUONG.inp","r",stdin);
 freopen("SOLUONG.out","w",stdout);
 FASTER
 ll a,b,x,y,d=0;
 cin>>a>>b>>x>>y;
 ll h=x*y/__gcd(x,y);
cout<<b/h-(a-1)/h;
}
