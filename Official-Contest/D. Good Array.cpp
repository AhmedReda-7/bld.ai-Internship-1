/**
 * G-E-R-G-I-S---K
 * Let's create! <3
 *
 * Problem  D. Good Array
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

    int n, x;
    cin >> n;
    stack<int> bag;
    vector<int> res;
    while (n)
    {
        cin >> x;
        if (bag.size() && s.top() == x) bag.pop();
        else bag.push(x);
        --n;
    }
    while (bag.size())
    {
        res.push_back(s.top());
        bag.pop();
    }
    reverse(res.begin(), res.end());
    cout << res.size() << '\n';
    for (auto i : res) cout << i << ' ';
    cout << '\n';

    return 0;
}
// LinkedIn     [https://www.linkedin.com/in/gergis-k]
// GitHub       [https://github.com/gergis-k]
// Codeforces   [https://codeforces.com/profile/gerges990]
