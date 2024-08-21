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
    ll n;cin>>n;
    ll arr[n]; 
    for(int i=0;i<n;i++){
          cin>>arr[i];
    }
    //we sort the array then check if the element is greater than out answer at that moment and when we find a number that is greater than the current sum we print that we cannot find the sum of that number since we started from the minimum whatever number we get will be the minimum
    sort(arr,arr+n);
    ll ans =1 ;
    for(int i=0;i<n;i++){
        if(ans < arr[i]){
            break;
        }else{
            ans+=arr[i];
        }
    }
    cout<<ans<<endl;
}

int main(){
    fast;
    ll t=1;
    while(t--){
        solve();
    }
    return 0;
}  
