/*
DarkCody
*/

#pragma GCC optimize ("O3")
#include<bits/stdc++.h>

typedef		long long	ll;
#define		f(i,a,n)	for(ll i=a,_n=n;i<=_n;i++)
#define		fb(i,a,n)	for(ll i=a,_n=n;i>=_n;i--)
#define		cody		"timso"

using namespace std;

const ll nmax = 1e6 + 1;
const ll mod = 1e9 + 7;

ll a[nmax] , n;
signed main(int argv, char const *argc[])
{

    freopen(cody".inp","r",stdin);
    freopen(cody".out","w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

	cin >> n;
	f(i , 1 , n)
	{
		cin >> a[i];
	}
	sort(a + 1 , a + 1 + n);
	if(n % 2 == 0) cout << a[n / 2];
	else cout << a[n / 2 + 1]; 
    return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Ðoc Co Cau Bai , Best Code Dao
*/

