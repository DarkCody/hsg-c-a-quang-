#include <bits/stdc++.h>
#define TASK "begin13"
int rev( int n ) {
	int res = 0;
	while(n) {
		res = res * 10 + n % 10;
		n /= 10;
	}
	return res;
}

int gcd( int a, int b ) {
	while(b) {
		int t = b;
		b = a % b;
		a = t;
	}
	return a;
}

int main() {
    #ifndef ONLINE_JUDGE
    	freopen(TASK".inp", "r", stdin);
    	freopen(TASK".out", "w", stdout);
    #endif // ONLINE_JUDGE
	int a, b; scanf( "%d%d", &a, &b );
	int count = 0;
	for( int i = a; i <= b; ++i ) if( gcd(i, rev(i)) == 1 ) ++count;
	printf( "%d\n", count );
	return 0;
}
