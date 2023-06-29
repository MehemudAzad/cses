#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef pair<int,int> pi;
#define trav(a, x) for(auto& a : x)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define len(s) (int)s.size()
#define print(x) cout<<x<<'\n'
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) for(int i=0; i<n; i++)
#define all(a) (a).begin(), (a).end()
#define endl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mod = 1000000007;

void solve(){
    // int mod = 1e9+7;
    int n;
    cin >> n;
    vector<vector<int>> dp(n, vector<int>(n, 0));
    dp[0][0] = 1;
    for (int i = 0; i < n; i++) {
        string row;
        cin >> row;
        for (int j = 0; j < n; j++) {
        if (row[j] == '.') {
        if (i > 0) {
        (dp[i][j] += dp[i-1][j]) %= mod;
        }
        if (j > 0) {
        (dp[i][j] += dp[i][j-1]) %= mod;
        }
        } else {
        dp[i][j] = 0;
        }
        }
    }
    cout << dp[n-1][n-1] << endl;
}

int main(){
    fast;
    ll t=1;
    // cin>>t;
    while(t--){
        solve();
    }
}  
