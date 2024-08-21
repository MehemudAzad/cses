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
    ll x,n;
    cin>>x>>n;
    set<int> positions;
    multiset<int> lengths;
    positions.insert(0);
    positions.insert(x);
    lengths.insert(x-0);
    for(ll i=0;i<n;i++){
        ll added;cin>>added;
        positions.insert(added);
        auto iter = positions.find(added);
        ll prevVal = *prev(iter);
        ll nextVal = *next(iter);
        lengths.erase(lengths.find(nextVal-prevVal));
        lengths.insert(added-prevVal);
        lengths.insert(nextVal-added);
        cout<<*lengths.rbegin()<<" ";
    }

    return 0;
}  