#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vii;
#define trav(a, x) for(auto& a : x)
#define ff first
#define ss second
#define pb push_back
#define mp make_pair
#define len(s) (int)s.size()
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) for(int i=0; i<n; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mod = 1000000007;

void solve(){
    ll n, sum;
    cin>> n >>sum;
    vector<pair<ll,ll>> v(n);
    rep(i,n){
        ll x; cin>>x;
        v[i] = {x, i+1};
    } 
    sort(v.begin(),v.end());
    for(int i =0 ; i < n; i++) {
        for(int j = i+1 ; j < n; j++){
            ll lo = j+1, hi = n-1;
            ll s = sum;
            s = s - v[i].ff- v[j].ff;
            while(lo < hi) {
                if(v[lo].ff + v[hi].ff == s) {
                    cout << v[i].ss<< " " << v[j].ss <<" "<<v[lo].ss<< " " << v[hi].ss <<endl;
                    return;
                }else if(v[lo].ff + v[hi].ff < s) {
                    lo++;
                }else{
                    hi--;
                }
            }
        }
    }

    cout<<"IMPOSSIBLE" <<endl;
}

int32_t main(){
    fast;
    ll t = 1;
    // cin>>t;
    while(t--){
        solve();
    }
}  
