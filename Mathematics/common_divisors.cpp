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


int32_t main(){
    fast;   
    int n; cin>>n;
    vector<int> range(1e6, 0);

    for(int i = 0; i < n; i++) {
        int x; cin>>x;
        range[x]++;//marks the values as 1
    }
    for(int i = 1e6; i >= 1; i--){ //start with the maximum number so that we don't have t0 loop all the numbers
        int multiple = 0;
        for(int j = i; j <= 1e6; j += i) {//a concept of sieve
            multiple += range[j];//check if the numbers exist and +1 
        }
        if(multiple > 1) {//more than two that means it is a gcd of two numbers
            cout<< i << endl;
            return 0;
        }
    }
}  
