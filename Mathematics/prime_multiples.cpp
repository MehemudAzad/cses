#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vii;
#define trav(a, x) for(auto& a : x)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define len(s) (int)s.size()
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) for(int i=0; i<n; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mod = 1e9+7;

//it is a problem of exclution and inclusion also bit masking
int32_t main(){
    fast;
    ll n,k; cin>>n>>k;
    vi v(k);
    rep(i,k) cin>>v[i];

    vector<ll> countByNumberOfDivisors(k+1, 0);
    for(int mask = 1; mask < (1<<k); mask++) {
        ll tmp = n;
        int numberOfDivisors=0;
        for(int i = 0; i < k; i++) {
            if((1<<i)&mask) {
                numberOfDivisors++;
                tmp /= v[i];
            }
        }
        // int numberOfDivisors = __builtin_popcount(mask);
        countByNumberOfDivisors[numberOfDivisors] += tmp;
    }

    ll ans = 0;
    for(int i=1; i<=k;i++) {
        if(i%2==0) 
            ans -= countByNumberOfDivisors[i];
        else 
            ans += countByNumberOfDivisors[i];
    }
    cout << ans << endl;
}  
