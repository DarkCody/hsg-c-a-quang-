#include <bits/stdc++.h>
using namespace std;
const long long nmax = 1e6 + 1;
string s;
long long l, r, a[nmax], p, n;
int main()
{
    cin >> n >> p >> s;
    s = " " + s;
    for (long long i = 1; i <= n; ++i)
    {
        a[i] = a[i - 1];
        if (s[i] == '1')
            a[i]++;
    }
    a[n + 1] = 1e9 + 7;
    while (p--)
    {
        int t;
        cin >> t;
        if (t == 1)
        {
            int q;
            cin >> q;
            if (s[q] == '0')
            {
                s[q] = '1';
                for (int i = q; i <= n; ++i)
                    a[i]++;
            }
            else
            {
                s[q] = '0';
                for (int i = q; i <= n; ++i)
                    a[i]--;
            }
        }
        else
        {
            int ans = 1e9 + 7;
            int pos;
            cin >> l >> r;
            if (a[l - 1] < a[l])
                pos = l;
            else
                pos = upper_bound(a + 1, a + 1 + n, a[l]) - a;
            int sub = pos - 1e9 - 7;
            while (pos <= r)
            {
                ans = min(ans, pos - sub);
                sub = pos;
                pos = upper_bound(a + 1, a + 1 + n, a[pos]) - a;
            }
            if (ans == 1e9 + 7)
                cout << "-1\n";
            else
                cout << ans << '\n';
        }
    }
    return 0;
}