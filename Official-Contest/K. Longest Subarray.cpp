/**
 * G-E-R-G-I-S---K
 * Let's create! <3
 *
 * Problem  K. Longest Subarray
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

    int n, k; cin >> n >> k;
    int arr[n + 1];
    map<int, int> mp;
    mp[0] = 0;
    for (int i = 1; i <= n; ++i) cin >> arr[i];
    int ret = 0, s = 0;
    for (int i = 1; i <= n; ++i)
    {
        s += arr[i];
        int need = s - k;
        if (mp.count(need))
            ret = max(ret, i - mp[need]);
        if (mp.count(s) == 0)
            mp[s] = i;
    }
    cout << ret << '\n';

    return 0;
}
// LinkedIn     [https://www.linkedin.com/in/gergis-k]
// GitHub       [https://github.com/gergis-k]
// Codeforces   [https://codeforces.com/profile/gerges990]
