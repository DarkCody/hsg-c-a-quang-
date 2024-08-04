#include <bits/stdc++.h>
using namespace std;

long long tt;
int main()
{
    cin >> tt;
    while (tt--)
    {
        long long a, b;
        cin >> a >> b;
        cout << b * a + (b * (b + 1) / 2) + a << '\n';
    }
    return 0;
}