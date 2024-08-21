#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vii;
#define trav(a, x) for(auto& a : x)
#define fi first
#define se second
#define pb push_back
#define mp make_pair
#define len(s) (int)s.size()
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) for(int i=0; i<n; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mod = 1000000007;


int possible(vi v, int mid) {
    int cnt = 1;
        ll s = 0;
        for(int i =0; i < v.size();i++) {
            if(s + v[i] > mid){
                s = 0;
                cnt++;
            }
            s += v[i];
        }
}
//binary search problem
int32_t main(){
    fast;
    int n,k; cin>>n>>k;
    vi v(n);
    rep(i,n) cin>>v[i];


    ll maxi = INT_MIN;
    for(int i = 0; i < n; i++) {
        maxi = max(maxi, v[i]);
    }

    ll lo = maxi;
    ll hi = 1e18;
    ll maxSum = 1e18;
    while(lo <= hi) {
        ll mid = lo + (hi - lo)/2;  
        int cnt = possible(v, mid);//find partitions //O(n)
        
        if(cnt > k){
            lo = mid + 1;
        }else{//<=
            if(mid < maxSum) maxSum = mid;
            hi = mid - 1;
        }
    }   
    cout << maxSum <<endl;
}   
