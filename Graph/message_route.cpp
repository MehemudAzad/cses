#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vii;
#define trav(a, x) for(auto& a : x)
#define ff first
#define ss second
#define pb push_back
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) for(int i=0; i<n; i++)
#define all(a) (a).begin(), (a).end()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mod = 1e9+7;

int n,m;
vector<int> par;
vector<bool> vis;
vector<vector<int>> g;

int main(){
    fast;
    cin>>n>>m;
    g.resize(n+1);
	vis.resize(n+1);
	par.resize(n+1);
    for(int i = 0; i<=n; ++i)
	{
		par[i] = -1;
	}
    for(int i =0; i<m; i++) {
        int u,v; cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }


    //run a bfs 
    queue<int> q;
    vis[1] = true;
    q.push(1);  
    par[1] = -1;
    while(!q.empty()) {
        int node = q.front();
        q.pop();

        for(int u : g[node]) {
            if(!vis[u]) {
                q.push(u);
                vis[u] = true;
                par[u] = node;
            }       
        }
    }

    vector<int> path;   
    int target = n;

    //if parent of target is null that means it is not possible to reach target from the source
    if(par[target] == -1 ) {
        cout << "IMPOSSIBLE" << endl;
        return 0;
    }

    //just push the path 
    path.push_back(n);
    while(par[target] != -1) {
        path.push_back(par[target]);
        target = par[target];
    }
    

    //stack could have also been used
    reverse(path.begin(), path.end());
    cout << path.size() << endl;
    for(int i = 0; i < (int)path.size(); i++) {
        cout << path[i] << " ";
    } 
}