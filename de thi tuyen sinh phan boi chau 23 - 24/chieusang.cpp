#pragma GCC optimize ("O3")
#include<bits/stdc++.h>

#define		f(i,a,n)	for(ll i=a,_n=n;i<=_n;i++)
#define		fb(i,a,n)	for(ll i=a,_n=n;i>=_n;i--)
#define		fo(it,x)	for(auto it : x)
#define		fi			first
#define		se			second
#define		endl		'\n'
#define		task		"chieusang"
typedef		long long	ll;
typedef		bool		bo;

using namespace std;

const ll nmax = 1e6;
const ll mod = 3e9;

void opfile(){
	#ifndef ONLINE_JUDGE
		freopen(task".INP","r",stdin);
		freopen(task".OUT","w",stdout);
	#endif //ONLINE_JUDGE
}

//-----------------------------------------
#define ii pair<int,int>

ll n , a[nmax] , b[nmax] , res[nmax] , m;
vector<ii> Vec;
signed main(int argc, char const *argv[])
{
	opfile();
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	cin >> n >> m;
	for(ll i = 1 , x  ; i <= n ; i++){
		cin >> x;
		Vec.emplace_back(x , i);
		res[i] = mod;
	}
	for(ll i = 1 , x ; i <= n ; i++){
		cin >> x;
		Vec.emplace_back(x , 0);
	}
	sort(Vec.begin() , Vec.end());
	ll cnt = -mod;
	f(i , 0 , n + m){
		if(Vec[i].se == 0)
			cnt = Vec[i].fi;
		else res[Vec[i].se] = min(res[Vec[i]. se] , Vec[i].fi - cnt);
	}
	cnt = mod;
	fb(i , n + m - 1 , 0){
		if(Vec[i].se == 0)
		cnt = Vec[i] . fi;
		else res[Vec[i] . se] = min(res[Vec[i].se] , cnt - Vec[i] . fi);
	}
	ll ans = 0;
	f(i , 1 , n) if(res[i] != mod)
	ans = max(ans , res[i]);
	cout << ans;
    return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Doc co cau bai , best code dao
*/


