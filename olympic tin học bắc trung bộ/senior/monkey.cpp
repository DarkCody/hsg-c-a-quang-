#include <bits/stdc++.h>
#define all(dataStructure) dataStructure.begin(), dataStructure.end()
#define ll long long

using namespace std;
namespace std
{
    template <typename T, int D>
    struct _vector : public vector<_vector<T, D - 1>>
    {
        static_assert(D >= 1, "Dimension must be positive!");
        template <typename... Args>
        _vector(int n = 0, Args... args) : vector<_vector<T, D - 1>>(n, _vector<T, D - 1>(args...)) {}
    };
    // _vector <int, 3> a(n, m, k);: int a[n][m][k].
    // _vector <int, 3> a(n, m, k, x);: int a[n][m][k] initialized with x.
    template <typename T>
    struct _vector<T, 1> : public vector<T>
    {
        _vector(int n = 0, const T &val = T()) : vector<T>(n, val) {}
    };
}

const int MAX = 1e5 + 3;
const ll MOD[] = {1000000007, 998244353};

int n, m, k;
ll ans = 1;

struct point
{
    long double x, y;

    point(long double x, long double y) : x(x), y(y) {}

    bool operator<(const point other) const
    {
        if (x != other.x)
            return x < other.x;
        return y < other.y;
    }

    bool operator!=(const point other) const
    {
        return x != other.x || y != other.y;
    }
};

struct lineSegment
{
    ll a, b, c;
    point x, y;

    lineSegment(ll a, ll b, ll c, point x, point y) : a(a), b(b), c(c), x(x), y(y) {}

    bool operator<(const lineSegment &other) const
    {
        if (a != other.a)
            return a < other.a;
        if (b != other.b)
            return b < other.b;
        if (c != other.c)
            return c < other.c;
        if (x != other.x)
            return x < other.x;
        return other.y < y;
    }

    bool operator!=(const lineSegment &other) const
    {
        return a != other.a || b != other.b || c != other.c;
    }
};

ll cross(const point &A, const point &B, const point &C)
{
    return (B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y);
}

ll dot(const point &A, const point &B, const point &C)
{
    return (B.x - A.x) * (C.x - A.x) + (C.y - A.y) * (B.y - A.y);
}

bool in(const point &A, const point &B, const point &C)
{
    return cross(A, B, C) == 0 && dot(C, A, B) <= 0;
}

bool intersect(point A, point B, point C, point D)
{
    if (in(A, B, C) || in(A, B, D) || in(C, D, A) || in(C, D, B))
        return 1;
    if (cross(A, B, C) == 0 || cross(A, B, D) == 0 || cross(C, D, A) == 0 || cross(C, D, B) == 0)
        return 0;
    if (cross(A, B, C) > 0 && cross(A, B, D) > 0)
        return 0;
    if (cross(A, B, C) < 0 && cross(A, B, D) < 0)
        return 0;
    swap(A, C);
    swap(B, D);
    if (cross(A, B, C) > 0 && cross(A, B, D) > 0)
        return 0;
    if (cross(A, B, C) < 0 && cross(A, B, D) < 0)
        return 0;
    return 1;
}

point get(const lineSegment &X, const lineSegment &Y)
{
    long double D = X.a * Y.b - X.b * Y.a;
    long double Dx = X.c * Y.b - X.b * Y.c;
    long double Dy = X.a * Y.c - X.c * Y.a;
    assert(D != 0);
    return {Dx / D, Dy / D};
}

namespace debug
{
    template <typename T>
    void printf(T a)
    {
        std::cerr << a << ' ';
    }

    template <typename T, typename... Args>
    void printf(T a, Args... args)
    {
        std::cerr << a << ' ';
        printf(args...);
    }

    template <typename T>
    void scanf(T &a)
    {
        std::cin >> a;
    }

    template <typename T, typename... Args>
    void scanf(T &a, Args &...args)
    {
        std::cin >> a;
        scanf(args...);
    }
}

struct graph
{
    int r;
    map<point, bool> d;
    vector<lineSegment> V;
    vector<lineSegment> L;
    int vertices = 0, edges = 0;

    void pushEdge(ll Ax, ll Ay, ll Bx, ll By)
    {
        if (Ax == Bx && Ay == By)
            return;
        if (Ax > Bx)
        {
            swap(Ax, Bx);
            swap(Ay, By);
        }
        if (Ax == Bx && Ay > By)
            swap(Ay, By);
        ll hsa, hsb, hsc;
        hsa = -By + Ay;
        hsb = Bx - Ax;
        hsc = hsa * Ax + hsb * Ay;
        hsc = -hsc;
        ll k = gcd(hsa, hsb);
        k = gcd(k, hsc);
        V.push_back(lineSegment(hsa / k, hsb / k, -hsc / k, point(Ax, Ay), point(Bx, By)));
    }

    void init()
    {
        cin >> r;
        vector<ll> x(r), y(r);
        for (int i = 0; i < r; i++)
            cin >> x[i] >> y[i];
        for (int i = 0; i < r - 1; i++)
            pushEdge(x[i], y[i], x[i + 1], y[i + 1]);
        sort(all(V));
        vector<lineSegment> F;
        F.push_back(V[0]);
        for (int i = 1; i < r - 1; i++)
        {
            if (V[i - 1] != V[i])
            {
                lineSegment toPush = F[0];
                for (int i = 1; i < (int)F.size(); i++)
                {
                    if (in(toPush.x, toPush.y, F[i].x))
                    {
                        if (toPush.y < F[i].y)
                            toPush.y = F[i].y;
                    }
                    else
                    {
                        L.push_back(toPush);
                        toPush = F[i];
                    }
                }
                L.push_back(toPush);
                F.clear();
                F.push_back(V[i]);
            }
            else
                F.push_back(V[i]);
        }
        lineSegment toPush = F[0];
        for (int i = 1; i < (int)F.size(); i++)
        {
            if (in(toPush.x, toPush.y, F[i].x))
            {
                if (toPush.y < F[i].y)
                    toPush.y = F[i].y;
            }
            else
            {
                L.push_back(toPush);
                toPush = F[i];
            }
        }
        L.push_back(toPush);
    }

    void solve()
    {
        for (int i = 0; i < (int)L.size(); i++)
        {
            if (!d[L[i].x])
            {
                d[L[i].x] = 1;
                vertices++;
            }
            if (!d[L[i].y])
            {
                d[L[i].y] = 1;
                vertices++;
            }
        }
        for (int i = 0; i < (int)L.size(); i++)
        {
            int cnt = 1;
            map<point, bool> exist;
            exist[L[i].x] = exist[L[i].y] = 1;
            for (int j = 0; j < (int)L.size(); j++)
            {
                if (L[i] != L[j])
                {
                    if (intersect(L[i].x, L[i].y, L[j].x, L[j].y))
                    {
                        point f = get(L[i], L[j]);
                        if (!d[f])
                        {
                            d[f] = 1;
                            vertices++;
                        }
                        if (!exist[f])
                        {
                            cnt++;
                            exist[f] = 1;
                        }
                    }
                }
            }
            edges += cnt;
        }
        ans += edges - vertices + 1;
    }
};

void Solve()
{
    cin >> n >> m >> k;
    vector<graph> G(k);
    for (int i = 0; i < k; i++)
    {
        G[i].init();
        G[i].solve();
    }
    cout << ans;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    #define TASK "TASK"
    if (fopen(TASK ".INP", "r"))
    {
        freopen(TASK ".INP", "r", stdin);
        freopen(TASK ".OUT", "w", stdout);
    }

    /* int TEST = 1; cin >> TEST; while (TEST--) */ Solve();

    cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << "s\n";
    return 0;
}