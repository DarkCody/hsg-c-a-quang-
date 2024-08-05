#include<bits/stdc++.h>
#define ll long long
#define st string
#define do double
#define bo bool
#define rf return false;
#define rt return true;
#define Quangcode int main()
#define fc(i,a,n) for(ll i=a;i<=n;i++)
#define ft(i,a,n) for(ll i=a;i>=n;i--)
#define FASTER ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
const int q=1e7;
const int maxn=1e7;
bool F[maxn+5];
int c[q],n;
void sangnt(){
	memset(F,true,sizeof(F));
	for(int i=2;i*i<=maxn;++i)
	if(F[i]) for(int j=i*i;j<=maxn;j+=i)
	F[j]=false;
}
Quangcode
{
	freopen("LATGACH.inp","r",stdin);
	freopen("LATGACH.out","w",stdout);
	FASTER
	sangnt();
	int x,e,i=0;
	cin>>n;	
	for(int j=1;j<=n;++j)
	{
            cin>>x;
            if(F[x]) { ++i; c[i]=x;}
        }
        if (i==0) cout<<-1;
        sort(c+1,c+i+1,greater<ll>());
        if(i%2==0)
        {
            for(int j=1;j<=i;j+=2) cout<<c[j]<<" ";
            for(int j=i;j>1;j-=2) cout<<c[j]<<" ";
        }
        else
        {
            for(int j=2;j<=i;j+=2) cout<<c[j]<<" ";
            for(int j=i;j>=1;j-=2) cout<<c[j]<<" ";
        }
    }
