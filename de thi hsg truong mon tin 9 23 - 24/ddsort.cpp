/*
DarkCody
*/

#pragma GCC optimize ("O3")
#include<bits/stdc++.h>

typedef		long long	ll;
#define		f(i,a,n)	for(ll i=a,_n=n;i<=_n;i++)
#define		fb(i,a,n)	for(ll i=a,_n=n;i>=_n;i--)
#define		cody		"ddsort"

using namespace std;

const ll nmax = 1e6 + 1;
const ll mod = 1e9 + 7;

ll a[nmax] , n;
map<ll , ll> cnt;
signed main(int argv, char const *argc[])
{

    freopen(cody".inp","r",stdin);
    freopen(cody".out","w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

	cin >> n;
	f(i , 1 , n){
		cin >> a[i];
		cnt[a[i]]++;
	}
	for(auto c: cnt){
		if(c . second >= 1){
			cout << c . first << ' ';
		}
	}
    return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Ðoc Co Cau Bai , Best Code Dao
*/

