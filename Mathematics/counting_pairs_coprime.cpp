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

const int maxValue = 1e6+10;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    rep(i,n) cin >> v[i];

    //use sieve to find the number of divisors of every number till 1e6
    vector<int> sieve(maxValue);
    vector<vector<int>> divisorsOf(maxValue);
    for (int i = 2; i < maxValue; i++)
    {
        if (divisorsOf[i].size() == 0)
        {
            divisorsOf[i].push_back(i);
            for(int j = 2*i; j < maxValue; j += i)
                divisorsOf[j].push_back(i);
        }
    }


    vector<int> valuesDivisibleBy(maxValue);
    vector<int> primeDivisorsOf(maxValue);
    for(int i = 0; i < n; i++)//2d array so 3 loops are required
    {
        int size = 1<<(divisorsOf[v[i]].size());
        for (int mask = 1; mask < size; mask++)
        {
            int combination  = 1;
            int primeDivisors = 0;
            for (int pos = 0 ; pos < size; pos++)
            {
                if (mask&(1<<pos))
                {
                    combination *= divisorsOf[v[i]][pos];//2 3 5 = 30
                    primeDivisors++;//3
                }
            }
            valuesDivisibleBy[combination]++;
            primeDivisorsOf[combination] = primeDivisors; //primedivisors of 30 = 3
        }
    }


    //final step calculations 
    //find total pairs
    ll totalNumberOfPairs = ((ll)n*((ll)(n-1)))/2;
    //valid pairs that have some common divisors except 1
    //IEP method
    ll validPairs = 0;
    for(int i = 0; i < maxValue; i++)//1e6 
    {
        if (primeDivisorsOf[i]%2 == 1)//odd
            validPairs += ((ll)valuesDivisibleBy[i]*((ll)valuesDivisibleBy[i]-1))/2;
        else
            validPairs -= ((ll)valuesDivisibleBy[i]*((ll)valuesDivisibleBy[i]-1))/2;
    }

    cout << totalNumberOfPairs - validPairs;
}