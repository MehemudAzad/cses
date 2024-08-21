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

int main(){
    fast;
    ll t=1;
    while(t--){
        ll n, m, k;
        cin>>n>>m>>k;
        vector<ll> vn(n),vm(m),result(n);
        rep(i,n) cin>> vn[i];
        rep(i,m) cin>> vm[i];
        sort(all(vn));
        sort(all(vm));
        // rep(i,n) cout<<vn[i]<<" ";
        // cout<<endl;
        // rep(i,m) cout<<vm[i]<< " ";
        // cout<<endl;
        ll i=0,j=0, cnt=0;
        while(i<n and j<m){
                if(((vn[i]-k)<=vm[j]) && ((vn[i]+k)>=vm[j])){
                    cnt++;
                    i++;
                    j++;
                }else if((vn[i]-k)<=vm[j]){
                    i++;
                }else{
                    j++;
                }
                
            }
            print(cnt);
        }     

    }

