#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
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

// dp[i][x] = maximum number of pages we can get for price at most x, only buying among the first i books.
ll mod = 1000000007;
//knapsack problem


int main(){
    fast;
    int n,x;cin>>n>>x;
    vi pages(n), prices(n);
    rep(i,n) cin>>prices[i];
    rep(i,n) cin>>pages[i];
    vector<vector<int>> dp(n+1, vector<int>(x+1, 0));

    for(int i =1;i<=n;i++){
        for(int j=0;j<=x;j++){
            dp[i][j] = dp[i-1][j];
            if(j-prices[i-1]>=0){
                dp[i][j] = max(dp[i][j], dp[i-1][j-prices[i-1]]+pages[i-1]);
            }
        }
    }
    cout<<dp[n][x]<<endl;
}  
