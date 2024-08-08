#include <bits/stdc++.h>
#define MAX 100000
#define TASK   "begin14"
int s[MAX+5];

void init() {
	for( int i = 1; i <= MAX; ++i )
		for( int j = i+i; j <= MAX; j += i ) s[j] += i;
}

int main() {
    #ifndef ONLINE_JUDGE
    	freopen(TASK".inp", "r", stdin);
    	freopen(TASK".out", "w", stdout);
    #endif // ONLINE_JUDGE
	init(); int l, r; scanf( "%d%d", &l, &r );
	int res = 0;
	for( int i = l; i <= r; ++i )
		res += s[i] > i;
	printf( "%d\n", res );
	return 0;
}
