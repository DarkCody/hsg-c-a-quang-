/*
DarkCody
*/

#pragma GCC optimize ("O3")
#include<bits/stdc++.h>

typedef		long long	ll;
#define		f(i,a,n)	for(ll i=a,_n=n;i<=_n;i++)
#define		fb(i,a,n)	for(ll i=a,_n=n;i>=_n;i--)
#define		cody		"bt"

using namespace std;

const ll nmax = 1e6 + 1;
const ll mod = 1e9 + 7;

string a[nmax];
bool check(string s)
{
	if(s . size() == 1) return false;
	f(i , 0 , s . size() - 1)
	{
		if(s[i] < s[i - 1])
		{
			return false;
		}
	}
	return true;
}
ll n;
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
		if(check(a[i]))
		{
			cout << "YES\n";
		}
		else
		{
			cout << "NO\n";
		}
	}
    return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Ðoc Co Cau Bai , Best Code Dao
*/

