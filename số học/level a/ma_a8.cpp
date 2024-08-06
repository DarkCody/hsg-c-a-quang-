#pragma GCC optimize ("O3")
#include<bits/stdc++.h>

#define		f(i,a,n)	for(ll i=a,_n=n;i<=_n;i++)
#define		fb(i,a,n)	for(ll i=a,_n=n;i>=_n;i--)
#define		fo(it,x)	for(auto it : x)
#define		fi			first
#define		se			second
#define		endl		'\n'
#define		task		"ma_a8"
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

ll binpow(ll a , ll b , ll c){
    a%=c;
    long long r=1;

    while(b)
    {
        if(b&1) r=(r*a)%c;
        a=(a*a)%c;
        b>>=1;
    }

    return int(r);
}

ll a , b , c;
signed main(int argc, char const *argv[])
{
	opfile();
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	cin >> a >> b >> c;
	cout << binpow(a , b , c);
    return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Doc co cau bai , best code dao
*/


