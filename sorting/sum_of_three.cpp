#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<ll> vi;
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
    
}

int main(){
    fast;
    ll n,x,s=0,k;
    cin>> n >>x;
    vector<pair<ll,ll>> v(n+5);
    REP(i,1,n){
        scanf("%lld", &k);
        v[i] = {k,i};
    }

    sort(v.begin(), v.end());
    
    for(int i=1;i<=n;i++){
        k = n; 
        ll j=i+1; //two pointer approach
        while(j<k){
            s=v[i].fi+v[j].fi+v[k].fi;
            if(s==x){
                cout<<v[i].se<<" "<<v[j].se<<" "<<v[k].se;
                return 0;
            }else if(s>x){ 
                k--;
            }else{
                j++;
            }
        }
    }
    cout<<"IMPOSSIBLE"<<endl;

    return 0;
}  
