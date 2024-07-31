#pragma GCC optimize ("O3")
#include<bits/stdc++.h>

#define		f(i,a,n)	for(ll i=a,_n=n;i<=_n;i++)
#define		fb(i,a,n)	for(ll i=a,_n=n;i>=_n;i--)
#define		fo(it,x)	for(auto it : x)
#define		fi			first
#define		se			second
#define		endl		'\n'
#define		task		"tachmaso"
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

struct Node{
	string s;
	ll zeros , id;
	Node(string s , ll zeros , ll id):
		s(s) , zeros(zeros) , id(id) {}
};

string s;
vector<Node> res;

signed main(int argc, char const *argv[])
{
	opfile();
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	cin >> s;
	f(i , 0 , s . size() - 1) if(s[i] >= '0' and s[i] <= '9'){
		ll pos = i , zeros = 0;
		string str;
		while(s[pos] == '0') pos++;
		zeros = pos - i;
		while(s[pos] >= '0' and s[pos] <= '9')
			str += s[pos] , pos++;
			res.emplace_back(str , zeros , i);
			i = pos;
	}
	sort(res . begin() , res . end() , [](Node x , Node y){
		string a = x . s , b = y . s;
		ll n = a . size() , m = b . size();
		if(n < m) return 1;
		if(n > m) return 0;
		f(i , 0 , n - 1) if(a[i] != b[i]){
			if(a[i] < b[i]) return 1;
			return 0;
		}
		if(x . id < y . id) return 1;
		else return 0;
	});
	for(auto i : res){
		f(j , 0 , i . zeros() - 1){
			cout << '0';
			cout << i . s << " ";
		}
	}
    return 0;
}
/*
----- Coder : Tran Dang Quang -------
Info : Doc co cau bai , best code dao
*/


