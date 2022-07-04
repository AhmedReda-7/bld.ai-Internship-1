/**
 * G-E-R-G-I-S---K
 * Let's create! <3
 *
 * Problem  J. Large Arrays
 */
#include <bits/stdc++.h>
#define fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int INF   = 0x3f3f3f3f;
const int MOD   = 1e9 + 10;
const int N     = 1e6 + 10;
int n, m, x, y;
double solve()
{
    auto bs = [&](int idx)
    {
        int s = 0, e = 1e18, ans = 0;
        while (s <= e)
        {
            int mid = (e - s) / 2 + s;
            if (min(mid / x, n) + min(mid / y, m) >= idx)
                ans = mid, e = mid - 1;
            else if (min(mid / x, n) + min(mid / y, m) <= idx)
                s = mid + 1;
        }
        return ans;
    };
    int idx = (n + m) / 2 + 1;
    if ((n + m) & 1) return bs(idx);
    return (bs(idx) + bs(idx - 1)) / 2.0;
}
int main()
{
#ifndef ONLINE_JUDGE
    //freopen("", "r", stdin);
    //freopen("", "w", stdout);
#endif
    fast_IO;

    cin >> n >> x >> m >> y;
    cout << fixed << setprecision(1) << solve() << '\n';

    return 0;
}
// LinkedIn     [https://www.linkedin.com/in/gergis-k]
// GitHub       [https://github.com/gergis-k]
// Codeforces   [https://codeforces.com/profile/gerges990]
