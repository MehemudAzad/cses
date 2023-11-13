#include<bits/stdc++.h> 

using namespace std;
#define ln '\n'
typedef long long ll;
const int mod = 1e9+7;



// int countDer(int n)
// {
//   // Base cases
//   if (n == 1) return 0;
//   if (n == 2) return 1;
 
//   // countDer(n) = (n-1)[countDer(n-1) + der(n-2)]
//   return (n - 1) * (countDer(n - 1) + countDer(n - 2));
// }
 
// int countDer(const int n)
// {
//     // Create an array to store 
//     // counts for subproblems
//     vector<int> der(n,0);
 
//     // Base cases
//     der[1] = 0;
//     der[2] = 1;
 
//     // Fill der[0..n] in bottom up manner 
//     // using above recursive formula
//     for (int i = 3; i <= n; ++i)
//         der[i] = (i - 1) * (der[i - 1] + 
//                             der[i - 2]);
 
//     // Return result for n
//     return der[n];
// }
 

int main()//derangement code
{
    int n; cin >> n;
    vector<ll> derangementsOf(n+1);

    derangementsOf[1] = 0;
    for(int i = 2; i <= n; i++)
        derangementsOf[i] = (i * derangementsOf[i-1] + (i%2?-1:1))%mod;

    cout << derangementsOf[n];
}