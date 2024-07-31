#pragma GCC optimize ("O3")
#include<bits/stdc++.h>

#define		f(i,a,n)	for(ll i=a,_n=n;i<=_n;i++)
#define		fb(i,a,n)	for(ll i=a,_n=n;i>=_n;i--)
#define		fo(it,x)	for(auto it : x)
#define		fi			first
#define		se			second
#define		endl		'\n'
#define		task		"tksp"
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

ll n , k , a[nmax] , Cont , cnt[nmax];
void add(ll x){
	cnt[x]++;
	if(cnt[x] == k) Cont++;
}
void del(ll x){
	cnt[x]--;
	if(cnt[x] == k - 1) Cont--;
}
signed main(int argc, char const *argv[])
{
	opfile();
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	cin >> n >> k;
	f(i , 1 , n) cin >> a[i];
	ll j = 0 , res;
	f(i , 1 , n){
		while(j < i || (Cont == 0 and j < n)){
			j++ , add(a[i]);
			if(Cont > 0) res += n - j + 1;
			del(a[i]);
		}
	}
	cout << res;
    return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Doc co cau bai , best code dao
*/


