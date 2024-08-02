#pragma target("avx3")
#pragma GCC optimize("Ofast")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#include<bits/stdc++.h>

#define     f(i,a,n)       for(ll i=a,_n=n;i<=n;i++)
#define     fb(i,a,n)      for(ll i=a,_n=n;i>=n;i--)
#define     endl           '\n'
#define     pb             push_back
#define     se             second
#define     pi             pair<int,int>
#define     all(x)         (x).begin(), (x).end()
#define     vt             vector<long long>
#define     fre(task)      freopen(task".inp","r",stdin); freopen(task".out","w",stdout);
using namespace std;

#define task ""
typedef long long ll;

const ll nmax = (int)1e6 + 1;
const ll mod = (int)1e9 + 7;

string s;
ll s1 , s2;
signed main(int argv, char const *argc[])
{
	fre("chiahet11");
 	ios_base::sync_with_stdio(false);
	cin.tie(NULL);cout.tie(NULL);
	cin >> s;
	f(i , 0 , s . size() - 1){
		if((i - 48) % 2 == 0){
			s1 += s[i] - 48;
		}
	}
	f(i , 0 , s . size() - 1){
		if((i - 48) % 2 != 0){
			s2 += s[i] - 48;
		}
	}
	if(s1 > s2) cout << s1 - s2 << " ";
	else cout << s2 - s1 << " ";
	if((s2 - s1) % 11 == 0 or (s1 - s2) % 11 == 0){
		cout << "YES";
	}
	else{
		cout << "NO";
	}
	return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Ðoc Co Cau Bai , Best Code Dao
*/


