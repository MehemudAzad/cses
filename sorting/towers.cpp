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
    int N, k;
    //we used multiset to solve this a great example of how we can use muitisets to solve problems easily
    multiset<int> S;
    multiset<int>::iterator it;

    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &k);
        it = S.upper_bound(k);
        if(it != S.end()){
            S.erase(it);  //if it is present we erase it 
        }
            
        S.insert(k); //and then we insert the latest value
    }
    printf("%d\n", (int)S.size());
    return 0;
}  
