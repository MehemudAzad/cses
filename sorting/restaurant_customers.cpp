#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define PI (2 * acos(0.0))
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
    ll n;
    cin>>n;
    ll a,b, ans =0, maxi = 0;
    //here we can solve this problem using prefix sum and array/ vectors but that will give us tle and mle so we used map and implemented the same thing 
    map<ll, ll> m;
    rep(i,n){
        cin>> a>> b;
        m[a]++;
        m[b]--;
    }
    for(auto x: m){
        ans +=x.second;
        maxi = max(ans, maxi);
    }
    cout<<maxi<<endl;
}

int main(){
    fast;
    ll t=1;
    while(t--){
        solve();
    }
}  
