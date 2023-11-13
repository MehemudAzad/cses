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

ll mod = 1000000007;


int32_t main(){
    fast;
    ll n; cin>>n;
    vi v(n);
    rep(i,n-1) cin>>v[i];
    ll s = n*(n+1)/2;

    ll s2 = 0;
    for(int i =0; i<n;i++){
        s2 += v[i];
    }

    cout << s - s2 <<endl;
}  

