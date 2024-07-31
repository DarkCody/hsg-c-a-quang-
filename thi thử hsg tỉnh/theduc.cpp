#include <bits/stdc++.h>
#define N 1000000
using namespace std;
int a[N+2];
stack <int> Stk;
int n;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    freopen("theduc.inp","r",stdin);
    freopen("theduc.out","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++) cin >> a[i];
    a[0] = int(2e9);
    Stk.push(0);
    for (int i=1; i<=n; i++)
    {
        while (a[i] >= a[Stk.top()]) Stk.pop();
        cout << Stk.top() << " ";
        Stk.push(i);
    }
    return 0;
}
