#include <bits/stdc++.h>
using namespace std;
//this problem is solved in a dp course 

int main() { 
    int mod = 1e9+7;
    int n, target;
    cin >> n >> target;
    vector<int> c(n);
    for (int&v : c) cin >> v;

    vector<int> dp(target+1,0);
    dp[0] = 1;
    for (int i = 1; i <= target; i++) {
      for (int j = 0; j < n; j++) {
        if (i-c[j] >= 0) {
          (dp[i] += dp[i-c[j]]) %= mod;//just didn't get this line 
        }
      }
    }
    cout << dp[target] << endl;
}
