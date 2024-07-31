/*
DarkCody
*/

#pragma GCC optimize ("O3")
#include<bits/stdc++.h>

typedef		long long	ll;
#define		f(i,a,n)	for(ll i=a,_n=n;i<=_n;i++)
#define		fb(i,a,n)	for(ll i=a,_n=n;i>=_n;i--)
#define		cody		"banbe"

using namespace std;

const ll nmax = 1e6;
const ll mod = 1e9 + 7;


ll f[nmax] , l , r , cnt = 0;
signed main(int argv, char const *argc[])
{

   freopen(cody".inp","r",stdin);
   freopen(cody".out","w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

	
	for(ll i = 1 ; i <= nmax ; i++)
		for(ll j = i + i ; j <= nmax ; j += i) f[j] += i;
	cin >> l >> r;
	f(i , l , r)
	{
		if(f[i] <= r and f[i] >= i and f[f[i]] == i)
		{
			cnt++;	
		}
	}
	cout << cnt;
    return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Ðoc Co Cau Bai , Best Code Dao
*/
