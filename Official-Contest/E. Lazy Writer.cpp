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
const int INF   = 0x3f3f3f3f;
const int MOD   = 1e9 + 10;
const int N     = 1e6 + 10;
vector<int> w;
int n, h;
bool solve(int x)
{
    int res = 0;
    for (auto &i : w)
        res += ((i + x - 1) / x);
    return res <= h;
}
int main()
{
#ifndef ONLINE_JUDGE
    //freopen("", "r", stdin);
    //freopen("", "w", stdout);
#endif
    fast_IO;

    cin >> n >> h;
    w.resize(n);
    for (auto &i : w) cin >> i;
    ll s = 1, e = 1e18, m, ans;
    while (s <= e)
    {
        m = (e - s) / 2 + s;
        if (solve(m)) ans = m, e = m - 1;
        else s = m + 1;
    }
    cout << ans << '\n';

    return 0;
}
// LinkedIn     [https://www.linkedin.com/in/gergis-k]
// GitHub       [https://github.com/gergis-k]
// Codeforces   [https://codeforces.com/profile/gerges990]
