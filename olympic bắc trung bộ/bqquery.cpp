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
const int nmax = 3000002, INF = 1e9 + 7;

int n, q, a[nmax], x, l, r, last;
char c;
struct node {
    int dist, fl, fr;
    node()
    {
        dist = INF;
        fl = INF;
        fr = -1;
    }
};
node combine (node a, node b)
{
    node ans = node();
    ans . dist = min(a . dist, b . dist);
    if (a . fr != -1 and b . fl != INF)
    {
        ans . dist = min(ans . dist, b . fl - a . fr);
    }
    ans . fl = min(a . fl, b . fl);
    ans . fr = max(a . fr, b . fr);
    return ans;
}
vector<node> t(4 * nmax, node());
void update (int id, int l, int r, int u, int val)
{
    if (u < l || u > r)
    {
        return;
    }
    if (l == r)
    {
        if (val == 0)
        {
            t[id] = node();
        }
        else 
        {
            t[id] . dist = INF;
            t[id] . fl = l;
            t[id] . fr = r;
        }
        return;
    }
    int mid = (l + r) / 2;
    update(id * 2, l, mid, u, val);
    update(id * 2 + 1, mid + 1, r, u, val);
    t[id] = combine(t[id * 2], t[id * 2 + 1]);
    return;
}
void update (int id, int val)
{
    update(1, 1, n, id, val);
    return;
}
node get_val(int id, int l, int r, int u, int v)
{
    if (v < l || u > r) return node();
    if (u <= l and r <= v) return t[id];
    int mid = (l + r) / 2;
    node save = combine(get_val(id * 2, l, mid, u, v) , get_val(id * 2 + 1, mid + 1, r , u , v));
    return save;
}
node get_val(int l, int r)
{
    return get_val(1, 1, n, l, r);
}
int main() {
  //freopen (taskname".inp", "r", stdin);
  //freopen (taskname".out", "w", stdout);
  
  ios_base::sync_with_stdio(false);
  cin.tie(nullptr);


  cin >> n >> q;
  for (int i = 1; i <= n; ++i)
  {
    cin >> c;
    a[i] = c - '0';
    update(i, a[i]);
  }
  while (q--)
  {
    cin >> x;
    if (x == 1)
    {
        cin >> l;
        a[l] = (a[l] + 1) % 2;
        update(l, a[l]);
    }
    else 
    {
        cin >> l >> r;
        int ans = get_val(l, r). dist;
        if (ans == INF) ans = -1;
        cout << ans << '\n';
    }
  }
  clock_t tStart = clock();
  cerr<<fixed<<setprecision(10)<<"\nTime Taken: "<<(double)(clock()- tStart)/CLOCKS_PER_SEC<<endl;
  return 0;
}
