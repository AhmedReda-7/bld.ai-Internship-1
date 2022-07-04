/**
 * G-E-R-G-I-S---K
 * Let's create! <3
 *
 * Problem  E. Diameter of 2D
 */
#include <bits/stdc++.h>
#define fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int INF   = 0x3f3f3f3f;
const int MOD   = 1e9 + 10;
const int N     = 1e6 + 10;
int main()
{
#ifndef ONLINE_JUDGE
    //freopen("", "r", stdin);
    //freopen("", "w", stdout);
#endif
    fast_IO;

    int r; cin >> r;
    int a[r][r];
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < r; ++j)
            cin >> a[i][j];
    ll sum = 0;
    for (int i = 0; i < r; ++i)
        sum += a[i][i];
    cout << sum << '\n';

    return 0;
}
// LinkedIn     [https://www.linkedin.com/in/gergis-k]
// GitHub       [https://github.com/gergis-k]
// Codeforces   [https://codeforces.com/profile/gerges990]
