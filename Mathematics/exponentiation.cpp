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


void bin_exp(int a, int b){//a^b
    int ans = 1;
    while (b)
    {
        if(b&1){   //if 3^13  --> 13 --> 1101  -->  3^8 ^ 3^4 ^ 3^1 = 3^13
            ans=(ans*1LL*a)%M;
        }
            a = (a*a *1LL)%M; //might exceed 10^9 so we use 1ll to calculate in long long and then M it to keep the value in range
            //we can always do the question in long long but in some cases time complexity will be exceeded
            b>>=1;
    }
    cout << ans << endl;
}

// //recursive
// ll power(int a, int b){
//     if(b==0 ) return 1;

//     ll result = power(a,b/2);
//     if(b&1){
//         return (((result*result)%M)*a)%M;
//     }else {
//         return (result*result)%M;
//     }
// }

//recursive
ll power(int a, int b){
    if(b==0) return 1;

    ll temp = (power(a,b/2));
    ll result = (temp*temp)%M;
    if(b&1){
        result = (result*a)%M;
    }
    return result;
}

int32_t main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
        int a, b; cin>> a>> b;
        ll ans = power(a,b);
        cout << ans << endl;
    }
}  
