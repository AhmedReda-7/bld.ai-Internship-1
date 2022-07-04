/**
 * G-E-R-G-I-S---K
 * Let's create! <3
 *
 * Problem  E. Lazy Writer
 */
#include <bits/stdc++.h>
#define fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll INF   = 0x3f3f3f3f;
const ll MOD   = 1e9 + 10;
const ll N     = 1e6 + 10;
int main()
{
#ifndef ONLINE_JUDGE
    //freopen("", "r", stdin);
    //freopen("", "w", stdout);
#endif
    fast_IO;

    int n, h;
    cin >> n >> h;
    vector<int> w(n);
    for (auto &i : w) cin >> i;
    ll s = 1, e = MOD, res = 0;
    while (s <= e)
    {
        ll m = (s + e) / 2;
        res = 0;
        for (int i = 0; i < n; ++i) res += (w[i] + m - 1) / m;
        if (res <= h) e = m - 1;
        else s = m + 1;
    }
    cout << e + 1 << '\n';

    return 0;
}
// LinkedIn     [https://www.linkedin.com/in/gergis-k]
// GitHub       [https://github.com/gergis-k]
// Codeforces   [https://codeforces.com/profile/gerges990]
