#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int max_sum = n*1000;//since coins are less than 1000

    vector<int> x(n);
    for (int&v : x) cin >> v;

    vector<vector<bool>> dp(n+1,vector<bool>(max_sum+1,false));
    //dp -> tabulation
    dp[0][0] = true;
    for (int i = 1; i <= n; i++) {//ind
        for (int j = 0; j <= max_sum; j++) {//sum
            dp[i][j] = dp[i-1][j];
            int left = j-x[i-1];
            if (left >= 0 && dp[i-1][left]) {
                dp[i][j] = true;
            }
        }
    }
    
    //store in vector
    vector<int> possible;
    for (int j = 1; j <= max_sum; j++) {
        if (dp[n][j]) {
        possible.push_back(j);
        }
    }

    //print size and solutions
    cout << possible.size() << endl;
    for (int v : possible) {
        cout << v << ' ';
    }
    cout << endl;
}