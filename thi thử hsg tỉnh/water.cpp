#include <bits/stdc++.h>

using namespace std;
int n;
int main()
{
    freopen("water.inp","r",stdin);
    freopen("water.out","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a > b) swap(b,a);
        int x = (b - a)/(2*c);
        if ((b - a) % (2*c) != 0) x++;
        cout << x << '\n';
    }
    return 0;
}
