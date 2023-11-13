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
#define len(s) (ll)s.size()
#define REP(i,a,b) for(ll i=a; i<=b; i++)
#define rep(i,n) for(ll i=0; i<n; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mod = 1e9+7;

vector<vector<ll>> multiply(vector<vector<ll>>&a, vector<vector<ll>>&b) {
    ll n = a.size();
    vector<vector<ll>> ans(n, vector<ll>(n,0));

    rep(i,n) {
        rep(j,n) {
            rep(k,n){
                ans[i][j] += (a[i][k] * b[k][j])%mod;
            }
        }
    }
    return ans;
}
vector<vector<ll>> matrixExponentiation(vector<vector<ll>> & a, ll n) {
    if(n==0) {
        ll sz = a.size();
        vector<vector<ll>> ans (sz, vector<ll>(sz,0));
        for(ll i =0; i<sz; i++){
            ans[i][i] = 1;
        }
        return ans;
    }

    if(n==1){
        return a;
    }

    vector<vector<ll>> temp = matrixExponentiation(a,n/2);
    vector<vector<ll>> ans = multiply(temp, temp);
    if(n&1) {
        ans = multiply(ans, a);
    }
    return ans;
}

int32_t main(){
    fast;
    ll n; cin>>n;
    vector<vector<ll>> a = {{1,1}, {1,0}};

    vector<vector<ll>> ans = matrixExponentiation(a,n);

    // for(ll i =0; i<ans.size(); i++) {
    //     for(ll j =0; j<ans.size(); j++) {
    //         cout << ans[i][j] << " ";
    //     }
    //     cout<< "\n";
    // }
    cout << (ans[0][1])%mod << endl; //top right corner one is the answer
}   
