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

ll mod = 1e9+7;

int n,m, rooms;
vector<vector<int>> vis;
vector<pair<int,int>> moves = {{-1,0}, {1,0}, {0,1}, {0,-1}};

bool isValid(int x, int y) {
    if(x < 0 or x>=n or y<0 or y>=m) 
        return false;
    
    if(vis[x][y])
        return false;
    return true;
}

void dfs(int i, int j) {
    vis[i][j] = true;
    for(auto p: moves){
        if(isValid(i+p.first, j+p.second)){
            dfs(i+p.first, j+p.second);
        }
    }
}

void connected_components() {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m;j++) {
            if(!vis[i][j]) {
                dfs(i,j);
                rooms++;
            }
        }
    }
}

void solve() {
    cin>> n>>m;
	vis.resize(n);
 
	for(int i = 0; i < n; ++i)
	{
		vis[i].resize(m);
	}
 
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < m; ++j)
		{
			char c; cin >> c;
			if(c == '#')
			{
				vis[i][j] = true;
			}
		}
	}
	connected_components();
	cout << rooms << endl;
}

int32_t main(){
    fast;
    solve();
} 
