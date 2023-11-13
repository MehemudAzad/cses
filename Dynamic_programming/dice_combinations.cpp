#include<bits/stdc++.h>
using namespace std;
#define ll long long

// // int solve(int n, vector<int> &dp){
// //     if(n==0) return 1;
// //     if(n<0) return 0;
// //     if(dp[n]!=-1) return dp[n];
// //     int ans = 0;  
// //     for(int i=1;i<=6;i++){
// //         ans+=solve(n-i, dp);
// //     }
// //     return ans;
// // }   


// //bottom-up approach


int main (){
    int mod = 1e9+7;
    int n;
    cin >> n;
    vector<int> dp(n+1,0);
    dp[0] = 1;
    for(int i=1;i<=n;i++){
        for(int j=1; j<=6 && i-j>=0; j++){
            (dp[i] += dp[i-j]) %= mod; //dp[x] = dp[x-1] + dp[x-2] + dp[x-3] + dp[x-4] + dp[x-5] + dp[x-6].
        }
    }
    cout<<dp[n]<<endl;
}
