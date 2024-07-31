/*
Cody
*/
#pragma GCC optimize ("O3")
#include<bits/stdc++.h>

typedef		long long	ll;
#define		f(i,a,n)	for(ll i=a,_n=n;i<=_n;i++)
#define		fb(i,a,n)	for(ll i=a,_n=n;i>=_n;i--)
#define		task		"knto"

using namespace std;

const ll nmax = 1e6;
const ll mod = 1e9 + 7;

void opfile(){
	freopen(task".INP","r",stdin);
	freopen(task".OUT","w",stdout);
}

ll demuoc(ll n){
	ll d = 0;
	f(i , 1 , sqrt(n)){
		if(n % i == 0){
			d += 2;
		}
	}
	ll k = sqrt(n);
	if(k * k == n) d -= 1;
	return d;
}
bool check(ll x){
	f(i , 2 , sqrt(x))
	if(x % i == 0) return false;
	return x > 1;
}
ll n , d = 0;
signed main(int argc, char const *argv[])
{
	opfile();
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    f(i , 1 , sqrt(n)){
    	if(n % i == 0){
    		ll j = n / i;
    		if(j == i){
    			if(check(i)){
    				d++;
				}
			}
			else{
				if(check(i)){
					d++;
				}
				if(check(j)){
					d++;
				}
			}
		}
	}
	cout << demuoc(n) - d;
    return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Doc co cau bai , best code dao
*/



