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


int n,m;
int cc = 0;
vector<vector<int>> g;
vector<bool> vis;
vector<int> lead;

void dfs(int u) {
    vis[u] = true;
    for(auto v: g[u])
        if(!vis[v]){
             dfs(v);
        }
}

 
void process_cc()
{
	for(auto i = 1; i <= n; ++i)
	{
		if(!vis[i])
		{
			cc++;
			lead.push_back(i);//save the first element of every cc
			dfs(i);
		}
	}
}
//find the connected componenets and then draw a line 
void solve() {
    cin>> n>>m;
	g.resize(n+1);
	vis.resize(n+1);
	for(auto i = 0; i < m; ++i)
	{
		int u, v;
		cin >> u >> v;
		g[u].push_back(v);
		g[v].push_back(u);
	}
 
	process_cc();
    
    //print the connected components - 1(the roads that need to be build)
	cout << cc-1 << endl;
	if(cc > 1)
	{
		int u = lead[0]; int v;
		for(auto i = 1; i < cc; i++)
		{
			v = lead[i];
			cout << u << " " << v << endl;//print the roads
			u = v;
		}
	}
}

int32_t main(){
    fast;
    solve();
}  
