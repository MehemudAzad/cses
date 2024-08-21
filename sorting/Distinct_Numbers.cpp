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
#define N (int)1e5+10

int main(){
    fast;
    ll n;
    cin>>n;
    // vector<int> a(t+1);
    // rep(i,t){
    //     cin>>a[i];
    // }
    // vector<int> freq(N);
    // // int freq(N);
    // // memset(freq, 0, sizeof(freq));
    // rep(i,N) freq[i]=0;
    // int cnt=0;
    // rep(i,t){
    //     freq[a[i]]++;
    // }
    // rep(i,t){
    //     if(freq[i]!=0) cnt++;
    // }
    // print(cnt);
    //
    //proper way to solve this is by using map or set 
    //set and map are tree based data structures
    set<int> s;
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        s.insert(temp);
    }
    cout<<s.size()<<endl;
}  
