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

const int MOD = 1000000007;

ll inverse(ll i)
{
    if (i == 1)
        return 1;
    return (MOD - ((MOD / i) * inverse(MOD % i)) % MOD + MOD) % MOD;
}
ll POW(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a % MOD;
    ll temp = POW(a, b / 2);
    if (b % 2 == 0)
        return (temp * temp) % MOD;
    else
        return (((temp * temp) % MOD) * a) % MOD;
}

int main()
{
    fast;
    ll n;
    cin >> n;

    ll ans = 0;
    for (ll i = 1; i * i <= n; i++)
    {
        ans += ((n / i) * i) % MOD;
        ans %= MOD; // ans = ans%mod;
    }

    ll l = (ll)sqrt(n);
    for (ll i = sqrt(n); i >= 1; i--)
    {
        ll r = n / i;
        ll sum = 0;
        sum += ((((r % MOD) * ((r + 1) % MOD)) % MOD) * inverse(2)) % MOD;//n*(n-1)/2
        sum %= MOD;
        sum -= ((((l % MOD) * ((l + 1) % MOD)) % MOD) * inverse(2)) % MOD;//n*(n-1)/2
        sum = (sum + MOD) % MOD;
        sum = (sum * i) % MOD;
        l = r;
        ans = (ans + sum) % MOD;
        // cout<<sum<<" ";
    }
    cout << ans;
}