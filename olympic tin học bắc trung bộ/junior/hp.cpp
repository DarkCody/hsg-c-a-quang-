/**
  author : cody
**/

/*
    /\_/\
   (= ._.)
  / >0   \>1
*/

#include <bits/stdc++.h>
#define taskname ""
#define ull unsigned long long
#define ll long long
#define endl "\n"

using namespace std;
const int nmax = 100005, INF = 1e9 + 7;

ll n, m, a[nmax], dem = 0, s[nmax][4], dp[nmax];
ll cong(ll a, ll b)
{
    if (b == 0)
        return 0;
    ll t = cong(a, b / 2);
    t = (t + t) % m;
    if (b & 1)
        return (t + a) % m;
    return t;
}
void sub3()
{
    for (ll i = 1; i <= n; ++i)
    {
        cin >> a[i];
    }
    for (ll i = 1; i <= n; ++i)
    {
        dp[i] = dp[i - 1] + a[i];
    }
    for (ll i = 1; i <= n - 2; ++i)
    {
        for (ll j = i + 1; j <= n - 1; ++j)
        {
            ll t = (a[i] * a[j]) % m;
            dem = dem + (t * (dp[n] - dp[j])) % m;
            dem = dem % m;
        }
    }
    cout << (dem + m) % m;
}
void sub45()
{
    for (ll i = 1; i <= n; ++i)
    {
        ll x;
        cin >> x;
        s[i][3] = (s[i - 1][3] + cong(x, s[i - 1][2])) % m;
        s[i][2] = (s[i - 1][2] + cong(x, s[i - 1][1])) % m;
        s[i][1] = (s[i - 1][1] + x) % m;
    }
    cout << s[n][3];
}
int main()
{
    // freopen (taskname".inp", "r", stdin);
    // freopen (taskname".out", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> m;
    if (n <= 3000)
        sub3();
    else
        sub45();
    clock_t tStart = clock();
    cerr << fixed << setprecision(10) << "\nTime Taken: " << (double)(clock() - tStart) / CLOCKS_PER_SEC << endl;
    return 0;
}