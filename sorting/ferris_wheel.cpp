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
// There are n
//  children who want to go to a Ferris wheel, and your task is to find a gondola for each child.

// Each gondola may have one or two children in it, and in addition, the total weight in a gondola may not exceed x
// . You know the weight of every child.

// What is the minimum number of gondolas needed for the children?

ll mod = 1000000007;

int main(){
    fast;
    ll t=1;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vi v(n);
        rep(i,n)cin>>v[i];
        ll cnt=n,sum=0,c=0;
        sort(all(v));
        ll i=0,j=n-1;
        while(i<j)
        { //we are picking a light weight element and checking if there is space to put it if not we are seeing next bigger element and allocating a full space for that bigger element as we started out count from cnt = n
            if(v[i]+v[j]<=m)cnt--,i++,j--;
            else j--;
        }
        cout<<cnt<<endl;
    }
    return 0;
}  
