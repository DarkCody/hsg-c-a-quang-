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

ll n, k, dem = 0;
vector<ll> adj[nmax];
pair<ll, ll> d[nmax];
void dfs (ll u, ll v)
{
    d[u] = {0, -1};
    for (ll i: adj[u])
    {
        if (i != v)
        {
            dfs(i, u);
            pair<ll, ll> p = d[i];
            if (d[u] . second == -1) d[u] = {p . first, p . second + 1};
            else 
            {
                if (d[u] . second + p . second + 1 >= dem)
                {
                    d[u] . first += p . first;
                    d[u] . second = min(d[u] . second ,p . second + 1);
                }
                else 
                {
                    d[u] . first += p . first - 1;
                    d[u] . second = max(d[u] . second , p . second + 1);
                }
            }
    
        }
    }
    if (d[u] . second == -1 or d[u] . second >= dem)
    {
        d[u] . first++;
        d[u] . second = 0;
    }
}
bool check (ll mi)
{
    dem = mi;
    dfs(1, 1);
    return (d[1] . first >= k);
}
void solve()
{
    ll l = 1, r = n, ans = 0;
    while (l <= r)
    {
        ll mid = (l + r) / 2;
        if (check(mid))
        {
            l = mid + 1;
            ans = mid;
        }
        else 
        {
            r = mid - 1;
        }
    }
    cout << ans;
}
int main()
{
    // freopen (taskname".inp", "r", stdin);
    // freopen (taskname".out", "w", stdout);

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n >> k;
    for (ll i = 1; i < n; ++i)
    {
        ll u, v;
        cin >> u >> v;
        adj[u] . push_back(v);
        adj[v] . push_back(u);
    }
    solve();
    return 0;
}