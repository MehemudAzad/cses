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

int main(){
    fast;
    ll t=1;
    // cin>>t;
    while(t--){
        ll n;cin>>n;
        vector<ll> songs(n);
        rep(i,n) cin>>songs[i];
        set<int> heard;
        ll i=0,j=0;
        ll ans = 0;
        while(j<n && i<n){
            while(j<n && !heard.count(songs[j])){
                heard.insert(songs[j]);
                ans = max(ans, j-i+1);
                j++;
            }
            while(j<n && heard.count(songs[j])){
                heard.erase(songs[i]);
                i++;
            }

        }
        cout<<ans<<endl;
    }
    return 0;
}  
