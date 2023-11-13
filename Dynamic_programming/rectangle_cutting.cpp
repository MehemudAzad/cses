#include <bits/stdc++.h>
using namespace std;
const int n = 500;
vector<vector<int>> dp(n+1, vector<int>(n, -1));
//memoized form
int func(int m, int n){
    if(m ==n) return 0;
    if(m == 1) return n-1;
    if(n == 1) return m-1;

    if(dp[m][n] !=-1) return dp[m][n];
    if(dp[n][m] != -1) return dp[m][n]; //since both are eventually same 

    int ans = 1e9;
    for(int i = 1; i<= m-1; i++) {
        ans = min(ans,func(i,n) + func(m-i, n) +1);
    }
    for(int i = 1; i<= n-1; i++) {
        ans = min(ans,func(m, i) + func(m, n-i) +1);
    }

    return dp[m][n] = ans;
}

int main() {
    int w, h;
    cin >> w >> h;
    vector<vector<int>> dp(w+1,vector<int>(h+1));
    for (int i = 0; i <= w; i++) {
        for (int j = 0; j <= h; j++) {
            if (i == j) {
                dp[i][j] = 0; //already sqaure
            } 
            else {
                dp[i][j] = 1e9;

                for (int k = 1; k < i; k++) {//try all possible combinatins on row
                    dp[i][j] = min(dp[i][j], dp[k][j]+dp[i-k][j]+1);
                }
                for (int k = 1; k < j; k++) {//try all possible combinations on col
                    dp[i][j] = min(dp[i][j], dp[i][k]+dp[i][j-k]+1);
                }
            }
        }
    }
    cout << dp[w][h] << endl;
}