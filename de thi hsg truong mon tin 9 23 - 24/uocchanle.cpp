/*
DarkCody
*/

#pragma GCC optimize ("O3")
#include<bits/stdc++.h>

typedef		long long	ll;
#define		f(i,a,n)	for(ll i=a,_n=n;i<=_n;i++)
#define		fb(i,a,n)	for(ll i=a,_n=n;i>=_n;i--)
#define		cody		"uocchanle"

using namespace std;

const ll nmax = 1e6 + 1;
const ll mod = 1e9 + 7;

bool scp(ll n){
	ll k = sqrt(n);
	return k * k == n;
}
ll t , n;
signed main(int argv, char const *argc[])
{

    freopen(cody".inp","r",stdin);
    freopen(cody".out","w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

	cin >> t;
	while(t--){
		cin >> n;
		if(scp(n)){
			cout << "LE\n";
		}
		else{
			cout << "CHAN\n";
		}
	}
    return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Ðoc Co Cau Bai , Best Code Dao
*/

