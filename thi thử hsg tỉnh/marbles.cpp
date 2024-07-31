#include <bits/stdc++.h>
#define N 100000
using namespace std;
int x[N+2];
int n, Q;
int main()
{
    freopen("marbles.inp","r",stdin);
    freopen("marbles.out","w",stdout);
    cin >> n >> Q;
    for (int i=1; i<=n; i++) cin >> x[i];
    sort(x + 1, x + n + 1);
    x[0] = -1;
    for (int i=1; i<=Q; i++)
    {
        int l, r;
        cin >> l >> r;
        int p1 = lower_bound(x,x+n+1,l) - x;
        int p2 = upper_bound(x,x+n+1,r) - x;
        cout << p2 - p1 <<'\n';
    }
    return 0;
}
