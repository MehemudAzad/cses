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
    ll n, x;
    cin>>n>>x;
    vector<pair<ll, ll> >v(n+1);
    REP(i,1,n){
        int x;
        cin>> x;
        v[i] = {x,i};
    };
    sort(v.begin()+1, v.end());
    ll j=n, i=1;
    while(i<j){
        if(v[i].fi+v[j].fi==x){
            cout<<v[i].se <<" "<< v[j].se;
            return 0;
        }else if(v[i].fi+v[j].fi>x){
            j--;
        }else{
            i++;
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}  
