#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vii;
#define trav(a, x) for (auto &a : x)
#define ff first
#define ss second
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

void solve()
{
    int n, k;
    cin >> n >> k;
    vi v(n);
    rep(i, n) cin >> v[i];
    ll ans = 0;
    int j = 0;
    map<int, int> occurence;

    for (int i = 0; i < n; i++)
    {
        while (j < n && ((int)occurence.size() < k || occurence.count(v[j]) > 0))
        {
            occurence[v[j]]++;
            j++;
        }
        ans += j - i;w
        occurence[v[i]]--;
        if (occurence[v[i]] == 0)
            occurence.erase(v[i]);
    }
    cout << ans << endl;
}

int32_t main()
{
    fast;
    ll t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
}
