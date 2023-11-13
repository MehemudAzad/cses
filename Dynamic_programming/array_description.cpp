#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vii;
#define trav(a, x) for (auto &a : x)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define len(s) (int)s.size()
#define REP(i, a, b) for (int i = a; i <= b; i++)
#define rep(i, n) for (int i = 0; i < n; i++)
#define all(a) (a).begin(), (a).end()
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);

ll mod = 1000000007;

int32_t main()
{
    fast;
    int mod = 1e9 + 7;
    int n, m;
    cin >> n >> m;
    vector<vector<int>> dp(n, vector<int>(m + 1, 0));
    int x0;
    //handle the first index
    cin >> x0;
    if (x0 == 0)
        fill(dp[0].begin(), dp[0].end(), 1);
    else
        dp[0][x0] = 1;

    //the rest of the indexes
    for (int i = 1; i < n; i++)
    {
        int x;
        cin >> x;
        if (x == 0) //if the value is zero
        {
            for (int j = 1; j <= m; j++)//choose a value for the index
            {
                for (int k : {j - 1, j, j + 1})//according to that index choose another one
                {
                    if (k >= 1 && k <= m)
                        (dp[i][j] += dp[i - 1][k]) %= mod;
                }
            }
        }
        else //if the value is non-zero
        {
            for (int k : {x - 1, x, x + 1})//check between the 3 numbers
            {
                if (k >= 1 && k <= m)//range checking
                    (dp[i][x] += dp[i - 1][k]) %= mod;
            }
        }
    }

    //final answer generate
    int ans = 0;
    for (int j = 1; j <= m; j++)
        (ans += dp[n - 1][j]) %= mod;

    cout << ans << endl;
}
