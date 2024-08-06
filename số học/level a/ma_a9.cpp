#pragma GCC optimize ("O3")
#include<bits/stdc++.h>

#define		f(i,a,n)	for(ll i=a,_n=n;i<=_n;i++)
#define		fb(i,a,n)	for(ll i=a,_n=n;i>=_n;i--)
#define		fo(it,x)	for(auto it : x)
#define		fi			first
#define		se			second
#define		endl		'\n'
#define     sqr(x)      (x) * (x)
#define		task		"ma_a9"
typedef		long long	ll;
typedef		bool		bo;

using namespace std;

const ll nmax = 1e6 + 1;
const ll mod = 1e9 + 7;

void opfile(){
	#ifndef ONLINE_JUDGE
		freopen(task".INP","r",stdin);
		freopen(task".OUT","w",stdout);
	#endif //ONLINE_JUDGE
}

//-----------------------------------------
#define ii pair<char,int>

ll Powmod(ll a , ll b , ll c){
	if(b == 0) return 1;
	ll k = Powmod(a , b / 2 , c);
	k = (k * k) % c;
	if(b % 2 != 0) k = (k * a) % c;
	return k % c;
}
string a , b;
void solve(){
	cin >> a >> b;
	ll x = 0 , y = 0;
	x = a[a . size() - 1] - 48;
	if(b . size() == 1) y = b[b . size() - 1] - 48;
	else y = (b[b . size() - 1] - 48) * 10 + b[b . size() - 1] - 48;
	cout << Powmod(x , y , 10);
}
signed main(int argc, char const *argv[])
{
	opfile();
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	solve();
    return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Doc co cau bai , best code dao
*/


