/**
 * G-E-R-G-I-S---K
 * Let's create! <3
 *
 * Problem C. Fibonacci
 */
#include <bits/stdc++.h>
#define fast_IO ios::sync_with_stdio(false), cin.tie(0), cout.tie(0)
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
const int INF   = 0x3f3f3f3f;
const int MOD   = 1e9 + 10;
const int N     = 1e6 + 10;
ll fibonacci(int num)
{
    ll a = 0, b = 1, c = 0;
    if (num <= 1)
        return num;
    for (int i = 2; i <= num; i++)
        c = a + b, a = b, b = c;
    return b;
}
int main()
{
#ifndef ONLINE_JUDGE
    //freopen("", "r", stdin);
    //freopen("", "w", stdout);
#endif
    fast_IO;

    int num;
    cin >> num;
    cout << fibonacci(num) << '\n';

    return 0;
}
// LinkedIn     [https://www.linkedin.com/in/gergis-k]
// GitHub       [https://github.com/gergis-k]
// Codeforces   [https://codeforces.com/profile/gerges990]
