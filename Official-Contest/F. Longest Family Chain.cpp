/**
 * G-E-R-G-I-S---K
 * Let's create! <3
 *
 * Problem  F. Longest Family Chain
 */
#include <bits/stdc++.h>
#define fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int INF   = 0x3f3f3f3f;
const int MOD   = 1e9 + 10;
const int N     = 1e6 + 10;
int longestStrChain(vector<string>& words)
{
    unordered_map <string, int> dp;
    int n = words.size();
    sort(words.begin(), words.end(),
         [](string s1, string s2) { return s1.size() < s2.size(); }
    );
    int ret = 0;
    for(int i = 0; i < n; ++i)
    {
        int best = 0;
        for(int j = 0; j < words[i].size(); ++j)
        {
            string word = words[i].substr(0, j) + words[i].substr(j + 1);
            best = max(best, dp[word] + 1);
        }
        dp[words[i]] = best;
        ret = max(ret, dp[words[i]]);
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

    int n;
    cin >> n;
    vector<string> v(n);
    for (auto &i : v) cin >> i;
    cout << longestStrChain(v) << '\n';

    return 0;
}
// LinkedIn     [https://www.linkedin.com/in/gergis-k]
// GitHub       [https://github.com/gergis-k]
// Codeforces   [https://codeforces.com/profile/gerges990]
