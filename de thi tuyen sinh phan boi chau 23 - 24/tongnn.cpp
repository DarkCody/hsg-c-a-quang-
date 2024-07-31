
#pragma GCC optimize ("O3")
#include<bits/stdc++.h>

#define		f(i,a,n)			for(ll i=a,_n=n;i<=_n;i++)
#define		fb(i,a,n)			for(ll i=a,_n=n;i>=_n;i--)
#define		endl				'\n'
#define		task				"tongnn"
typedef		long long			ll;
typedef 	unsigned long long  qword;

using namespace std;

const ll nmax = 1e6 + 1;
const ll mod = 1e9 + 7;

void opfile() {
	#ifndef ONLINE_JUDGE
		freopen(task".INP","r",stdin);
		freopen(task".OUT","w",stdout);
	#endif //ONLINE_JUDGE
}

//-----------------------------------------
#define ii pair<char,int>

ll resa , resb , n , m;
void nth(ll a){
	ll b = n / a * m;
	if(__gcd(a , b) == m and a + b < resa + resb){
		resa = a , resb = b;
	}
}
signed main(int argc, char const *argv[]) {
	opfile();
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	cin >> m >> n;
	resa = resb = 1e12;
	f(a , 1 , sqrt(n)){
		if(n % a == 0){
			if(a % m == 0) nth(a);
			if(n / a % m == 0) nth(n / a);
		}
	}
	if(resa + resb == 2e12) cout << -1;
	else cout << resa + resb;
}

