/*
DarkCody
*/

#pragma GCC optimize ("O3")
#include<bits/stdc++.h>

typedef		long long	ll;
#define		f(i,a,n)	for(ll i=a,_n=n;i<=_n;i++)
#define		fb(i,a,n)	for(ll i=a,_n=n;i>=_n;i--)
#define		cody		"minsum"

using namespace std;

const ll nmax = 1e6 + 1;
const ll mod = 1e9 + 7;

ll n , m , resa , resb;
void seive(ll a)
{
	ll b = n / a * m;
	if(__gcd(a , b) == m and a + b < resa + resb)
	{
		resa = a , resb = b;
	}
}
signed main(int argv, char const *argc[])
{

    freopen(cody".inp","r",stdin);
    freopen(cody".out","w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

	cin >> m >> n;
	resa = resb = 1e12;
	f(i , 1 , sqrt(n))
	{
		if(n % i == 0)
		{
			if(i % m == 0) seive(i);
			if(n / i % m == 0) seive(n / i);	
		}
	}
	if(resa + resb == 2e12) cout << -1;
	else cout << resa + resb;
    return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Ðoc Co Cau Bai , Best Code Dao
*/

