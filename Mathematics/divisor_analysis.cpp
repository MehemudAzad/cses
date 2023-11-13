#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
typedef vector<vi> vii;
#define trav(a, x) for(auto& a : x)
#define pb push_back
#define REP(i,a,b) for(int i=a; i<=b; i++)
#define rep(i,n) for(int i=0; i<n; i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll mod = 1e9+7;

const int MOD=1000000007; 
const int MOD1=1000000006;
long long int inverse(long long int i, long long int mod){
    if(i==1) return 1;
    return (mod - ((mod/i)*inverse(mod%i,mod))%mod+mod)%mod;
}
ll POW(ll a,ll b)
{
    if(b==0) return 1;
    if(b==1) return a%MOD;
    ll temp=POW(a,b/2);
    if(b%2==0) return (temp*temp)%MOD;
    else return (((temp*temp)%MOD)*a)%MOD;
}

int main()
{
    fast;
    ll n; cin>>n;

    ll x[n],k[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>k[i];
    }

    ll num=1;
    for(int i=0;i<n;i++)
    {
        num*=(k[i]+1)%MOD;
        num%=MOD;
    }

    ll sum=1;
    for(int i=0;i<n;i++)
    {
        ll temp=(POW(x[i],k[i]+1)+MOD-1)%MOD;
        temp*=inverse(x[i]-1,MOD);
        temp%=MOD;
        sum*=temp;
        sum%=MOD;
    }

    ll prod,num1=1;
    ll flag=0;
    for(int i=0;i<n;i++)
    {
        if(k[i]%2==1 && flag==0)
        {
            num1*=((k[i]+1)/2);
            num1%=MOD1;
            flag=1;
        }
        else
        {
            num1*=(k[i]+1)%MOD1;
            num1%=MOD1;
        }
    }
    if(flag==0)
    {
        for(int i=0;i<n;i++)
        {
            k[i]/=2;
        }
    }
    ll number=1;
    for(int i=0;i<n;i++)
    {
        number*=POW(x[i],k[i]);
        number%=MOD;
    }

    prod=POW(number,num1);

    cout<<num<<" "<<sum<<" "<<prod;
}