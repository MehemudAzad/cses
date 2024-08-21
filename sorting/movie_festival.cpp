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

// bool compare(const pair<int, int>&i, const pair<int, int>&j) 
// { 
//     return i.second < j.second; 
// } 

int main(){
    fast;
    ll t=1;
    // cin>>t;
    while(t--){
        ll n; cin>>n;
        ll x,y;
        vector<pair<ll,ll>> v(n+1);
        rep(i,n){
            cin>>x>>y;
            v.pb({x,y});
        }
        sort(v.begin(),v.end()); 
        ll i=0, ans =0, temp = 0;
        while(i<n){
            if(temp<=v[i].se){
                temp = v[i].fi;
                i++;
                ans++;
            }else{
                i++;
            }
        }
        cout<<ans<<endl;
        
}  
    return 0;
}
