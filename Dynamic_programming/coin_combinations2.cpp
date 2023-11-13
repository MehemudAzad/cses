#include <bits/stdc++.h>
using namespace std;

int main() {
    int mod = 1e9+7;
    int n, target;
    cin >> n >> target;
    vector<int> x(n);
    for (int&v : x) cin >> v;
    //in this problem the order becomes important as we are not allowed to take the same coin twice and hence we have to keep count of the number of coins we are also using we use a 2d dp array
    
    // dp[i][x] = number of ways to pick coins with sum x, using the first i coins.
    vector<vector<int>> dp(n+1,vector<int>(target+1,0));
    dp[0][0] = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 0; j <= target; j++) {
            dp[i][j] = dp[i-1][j];
            int left = j-x[i-1];

            if (left >= 0) {
                (dp[i][j] += dp[i][left]) %= mod;
            }
        }
    }
    cout << dp[n][target] << endl;
}