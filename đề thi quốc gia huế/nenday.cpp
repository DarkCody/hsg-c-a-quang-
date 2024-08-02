#pragma target("avx3")
#pragma GCC optimize("Ofast")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>

#define     f(i,a,n)       for(ll i=a,_n=n;i<=n;i++)
#define     fb(i,a,n)      for(ll i=a,_n=n;i>=n;i--)
#define     endl           '\n'
#define     pb             push_back
#define     se             second
#define     pi             pair<int,int>
#define     all(x)         (x).begin(), (x).end()
#define     vt             vector<long long>
#define     fre(task)      freopen(task".inp","r",stdin); freopen(task".out","w",stdout);
using namespace std;

#define task ""
typedef long long ll;

const ll nmax = (int)1e6 + 1;
const ll mod = (int)1e9;

ll po(ll a, ll b,ll c)
{
    if (b == 1) return a;
    if (b == 0) return 1;
    ll t= po(a , b / 2 , c);
    if (b % 2 ==0) return t * t % c;
    return t * t % c * a % c;
}
ll n;
signed main(int argv, char const *argc[])
{
	fre("nenday");
 	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
    cin >> n;
    if(n == 1) cout << 1;
    else cout << (po(2 , n-2 , mod) * (n + 1)) % mod;
	return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Ðoc Co Cau Bai , Best Code Dao
*/


