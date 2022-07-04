/**
 * G-E-R-G-I-S---K
 * Let's create! <3
 *
 * Problem  H. 2D Points
 */
#include <bits/stdc++.h>
#define fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const ll INF   = 0x3f3f3f3f;
const ll MOD   = 1e9 + 10;
const ll N     = 1e6 + 10;
ll n, k;

ll solve(vector<ll> &X, vector<ll> &Y)
{
    multiset<pair<ll, ll>> arr;
    multiset<ll> mn;
    ll ret = -1;
    for (ll i = 0, x, y; i < n; ++i)
    {
        x = X[i], y = Y[i];
        while (arr.size() and arr.begin()->first < x - k)
        {
            ll u = arr.begin()->first, v = arr.begin()->second;
            arr.erase(arr.begin());
            mn.erase(mn.find(u - v));
        }
        if (mn.size())
            ret = max(ret, (x + y) - *mn.begin());
        arr.emplace(x, y);
        mn.emplace(x - y);
    }
    return ret;
}

ll solve2(vector<ll> &X, vector<ll> &Y)
{
    multiset<pair<ll, ll>> arr;
    multiset<ll> mn;
    ll ret = -1;
    for (ll i = 0, x, y; i < n; ++i)
    {
        x = X[i], y = Y[i];
        while (arr.size() and arr.rbegin()->first > x + k)
        {
            ll u = arr.rbegin()->first, v = arr.rbegin()->second;
            arr.erase(--arr.end());
            mn.erase(mn.find(u + v));
        }
        if (mn.size())
            ret = max(ret, *mn.rbegin() - (x - y));
        arr.emplace(x, y);
        mn.emplace(x + y);
    }
    return ret;
}

int main()
{
#ifndef ONLINE_JUDGE
    //freopen("", "r", stdin);
    //freopen("", "w", stdout);
#endif
    fast_IO;

    cin >> n >> k;
    vector<ll> x(n), y(n);
    for (ll i = 0; i < n; ++i) cin >> x[i] >> y[i];
    ll ret = solve(x, y);
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());
    ret = max(ret, solve2(x, y));
    cout << ret;

    return 0;
}
// LinkedIn     [https://www.linkedin.com/in/gergis-k]
// GitHub       [https://github.com/gergis-k]
// Codeforces   [https://codeforces.com/profile/gerges990]
