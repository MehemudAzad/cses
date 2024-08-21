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
    while(t--){
        ll n, flag=0;cin>>n;
        vector<ll> v(n+1);
        rep(i,n){
            cin>>v[i];
            if(v[i]>=0) flag =1;//check if all element -ve
        } 
        //code 
        ll maxi=INT_MIN;
        ll s=0;
        if(flag){
            //kadane's algorithm
            for(int k=0;k<n;k++){
            s+=v[k];
            if(s<0){
                s=0;
            }
            if(maxi<s){
                maxi = s;
            }
        }
        }else{
            //if all negative 
            rep(i,n){
                maxi = max(maxi, v[i]);
            }
        }
        
        cout<<maxi<<endl;
    }
    return 0;
}  
