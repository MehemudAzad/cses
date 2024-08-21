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
#define nl '\n'
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mod = 1000000007;
// Here we need the lower bound of the multiset(as the values can be duplicate) each time and erase it from the set. If the iterator points to the end of set that means there is no value to satisfy the condition.
int main(){
    fast;
    ll t=1;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vi v(n),u(m);
        rep(i,n)cin>>v[i];
        rep(i,m)cin>>u[i];
        multiset<int,greater<int>>s;
        rep(i,n)s.insert(v[i]);
        rep(i,m)
        {
            auto it=s.lower_bound(u[i]);
            if(it==s.end())cout<<-1<<endl;
            else
            {
                cout<<*it<<endl;
                s.erase(it);
            }
        } 
    }
    return 0;
}  
