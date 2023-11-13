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
    string s1, s2;
    cin>>s1>>s2;
    ll m = s1.length();
    ll n = s2.length();
    vector<vector<ll>> dp(m+1, vector<ll>(n+1, 0));
    for(ll i =0 ; i<=m; i++) dp[i][0] = i;
    for(ll i =0 ; i<=n; i++) dp[0][i] = i;

    for(int i =1 ; i<=m ;i++) {//row
        for(int j=1; j<=n; j++) {//col
            if(s1[i-1] == s2[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }else{
                dp[i][j] = 1+ min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]);
            }
        }   
    }

    cout << dp[m][n] << endl;
}  
