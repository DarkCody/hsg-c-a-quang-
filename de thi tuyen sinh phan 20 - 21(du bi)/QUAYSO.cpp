#include<bits/stdc++.h>
#define ll long long
#define st string
#define do double
#define bo bool
#define rf return false;
#define rt return true;
#define Quangcode int main()
#define maxn 
#define mod 1000000007
#define fc(i,a,n) for(ll i=a;i<=n;i++)
#define ft(i,a,n) for(ll i=a;i>=n;i--)
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
ll i,n,j,b,gt,dem,a[1005];
Quangcode
{
 //freopen("QUAYSO.inp","r",stdin);
 //freopen("QUAYSO.out","w",stdout);
 FASTER
 cin>>n;
 for (i = 0; i < n; i++) 
 cin>>a[i];
b=1;
 for (i = 0; i < n; i++)
 {
  dem = 0;
  for (j = 0; j < n; j++)
  {
   if (a[i] == a[j]) dem++;
  }
  if (b < dem)
  {
   b = dem;
   gt = a[i];
  }
 }
 cout<<gt;
}
