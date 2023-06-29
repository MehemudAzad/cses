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
    int n,x;cin>>n>>x;
    vector<int> price(n), pages(n);
    for (int&v : price) cin >> v;
    for (int&v : pages) cin >> v;
    vector<vector<int>> dp(n+1,vector<int>(x+1,0));
    
}

int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}  
