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

ll M = 1e9+7;

ll bin_exp(ll a, ll b, ll M){//a^b
    ll ans = 1;
    while (b)
    {
        if(b&1)   //if 3^13  --> 13 --> 1101  -->  3^8 ^ 3^4 ^ 3^1 = 3^13
            ans=(ans*1LL*a)%M;
        a = (a*a*1LL)%M; 
        b>>=1;
    }
    return ans;
}


ll POW(ll a,ll b, ll mod)
{
    if(b==0) return 1;
    if(b==1) return a%mod;
    ll temp=POW(a,b/2,mod);
    if(b%2==0) return (temp*temp)%mod;
    else return (((temp*temp)%mod)*a)%mod;
}

int32_t main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
        int a,b,c; cin>>a>>b>>c;
        ll exponent = bin_exp(b,c,M-1);
        cout<< bin_exp(a,exponent, M) << endl;
    }
}  
