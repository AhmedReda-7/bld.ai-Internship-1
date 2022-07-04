/**
 * G-E-R-G-I-S---K
 * Let's create! <3
 *
 * Problem  D. Good Array | Solution 1
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
    
    // (-10^4 <= item <= 10^4) 10000 + 1 + 10000
    int freq[20001];
    
    // index: 0 |  1 ...  10000 | 10001 ... 20000
    // value: 0 | -1 ... -10000 | 1     ... 10000
    // -------------------------|----------------
    //        0 |      *-1      |      +10000
    
    memset(freq, 0, sizeof(freq));
    int n; cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
    {
        int tmp; cin >> tmp;
        v[i] = tmp;
        if (tmp > 0)
            ++freq[tmp + 10000];
        else if (tmp < 0)
            ++freq[tmp * -1];
        else ++freq[tmp];
    }
    vector<int> res;
    for (int i = 0; i < n; ++i)
    {
        int cfre;
        if (v[i] > 0)
            cfre = freq[v[i] + 10000];
        else if (v[i] < 0)
            cfre = freq[v[i] * -1];
        else cfre = freq[v[i]];
        if (cfre == 1) res.push_back(v[i]);
    }
    cout << res.size() << '\n';
    for (auto i : res) cout << i << ' ';

    return 0;
}
// LinkedIn     [https://www.linkedin.com/in/gergis-k]
// GitHub       [https://github.com/gergis-k]
// Codeforces   [https://codeforces.com/profile/gerges990]
