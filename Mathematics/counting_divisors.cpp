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
const int N = 1e6+1;
void solve(){
    int n; cin>>n;
    int divisor_cnt[N] = {0};

    for(int i = 1; i<N;i++) {
        for(int j = i; j<N; j+=i) {
            divisor_cnt[j] +=1;
        }
    }

    while(n--){
        int x;
        cin>>x;
        cout << divisor_cnt[x] << endl;
    }
}

int32_t main(){
    fast;
    ll t =1 ;
    // cin>>t;
    while(t--){
        solve();
    }
}  
