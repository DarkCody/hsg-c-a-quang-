/*
DarkCody
*/

#pragma GCC optimize ("O3")
#include<bits/stdc++.h>

typedef		long long	ll;
#define		f(i,a,n)	for(ll i=a,_n=n;i<=_n;i++)
#define		fb(i,a,n)	for(ll i=a,_n=n;i>=_n;i--)
#define		cody		"swapmin"

using namespace std;

const ll nmax = 1e6 + 1;
const ll mod = 1e9 + 7;

string s;
vector<char> p;
signed main(int argv, char const *argc[])
{

    freopen(cody".inp","r",stdin);
    freopen(cody".out","w",stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);

	cin >> s;
	f(i , 0 , s . size() - 1){
		if(s[i] != '0'){
			p . push_back(s[i]);
		}
	}
	sort(p . begin() , p . end());
	f(i , 0 , p . size() - 1){
		cout << p[i];
	}
    return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Ðoc Co Cau Bai , Best Code Dao
*/

