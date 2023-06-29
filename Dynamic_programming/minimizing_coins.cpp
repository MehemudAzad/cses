#include<bits/stdc++.h>
using namespace std;
#define ll long long



void solve(){
    // int n,x;cin>>n>>x;
    // vector<int> v(n);
    // for(auto&i : v) cin>>i;

    // //step 1 : declaring vector
    // vector<int> dp(x+1, -1);
    // dp[0] = 0; //base case

    // for(int i=1;i<=x;i++){//target 
    //     for(int j=0;j<n;j++){//coins
    //         if(i-v[j]>=0){
    //             dp[i] = min(dp[i], dp[i-v[j]]+1);
    //         }
    //     }
    // }
    // cout<<dp[x]<<endl;
    

    int n, target;
    cin >> n >> target;
    vector<int> c(n);
    for (int&v : c) cin >> v;

    vector<int> dp(target+1,1e9);

    dp[0] = 0;

    for (int i = 1; i <= target; i++) {
        for (int j = 0; j < n; j++) {
            if (i-c[j] >= 0) {
                dp[i] = min(dp[i], dp[i-c[j]]+1);
                //we  are removing c[j] coins from our target and asking to give us the minimum number of coins from the function and so we also add 1 to it
            }
        }
    }
    cout << (dp[target] == 1e9 ? -1 : dp[target]) << endl;
}

int main (){
    solve();
}