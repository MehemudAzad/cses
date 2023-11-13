#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vii;
#define trav(a, x) for(auto& a : x)
#define ff first
#define ss second
#define pb push_back
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) for(int i=0; i<n; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll M = 1e9+7;
const int N = 1e6+5;
ll fact[N], inv_fact[N];


// ll power(ll a, ll b){
//     if(b == 0) return 1;

//     ll temp = (power(a,b/2));
//     ll result = (temp*temp)%M;
//     if(b&1){
//         result = (result*a)%M;
//     }
//     return result;
// }


// int32_t main(){
//     fast;
//     ll t;
//     fact[0] = 1, inv_fact[0] = 1;
//     REP(i,1, 1e6+1) {
//         fact[i] = (fact[i-1] * i * 1LL)%M;
//         inv_fact[i] = power(fact[i], M-2); //standard technique for calculating inverse modulo
//     }
//     cin>>t;
//     while(t--){
//         ll a,b;    cin >> a >> b;
//         ll ans = (((fact[a] * inv_fact[a-b] * 1LL)%M)*inv_fact[b]*1LL)%M;
//         cout << ans << endl;
//     }
// }  

long long int inverse(long long int i){
    if(i==1) return 1;
    return (M - ((M/i)*inverse(M%i))%M+M)%M;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll fact[1000001];
    fact[0]=1;
    fact[1]=1;
    for(int i=2;i<=1000000;i++)
    {
        fact[i]=(fact[i-1]*i)%M;
    }
    ll n,a,b;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;
        ll ans=(fact[a]*inverse(fact[b]))%M;
        ans*=inverse(fact[a-b]);
        ans%=M;
        cout<<ans<<"\n";
    }
}