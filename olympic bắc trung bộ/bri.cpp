#include <bits/stdc++.h>
using namespace std;
const long long nmax = 1e6 + 1;
long long a[nmax], n, b[nmax], m, dp[nmax];
long long tim(long long x)
{
    long long l = 1, r = n, ans = 0;
    while (l <= r)
    {
        long long mid = (l + r) / 2;
        if (x >= dp[mid])
        {
            ans = mid;
            l = mid + 1;
        }
        else
        {
            r = mid - 1;
        }
    }
    return ans;
}
int main()
{
    cin >> n;
    for (long long i = 1; i <= n; ++i)
        cin >> a[i];
    dp[1] = a[1];
    for (long long i = 2; i <= n; ++i)
    {
        dp[i] = max(dp[i - 1], a[i] - a[i - 1]);
    }
    cin >> m;
    for (long long i = 1; i <= m; ++i)
    {
        cin >> b[i];
        cout << tim(b[i]) << '\n';
    }
    return 0;
}