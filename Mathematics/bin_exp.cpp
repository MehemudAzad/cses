#include <iostream>
#include <string>
using namespace std;
#define M 1000000007

//we use iterative method generally
int bin_exp(int a, int b){//a^b
    int ans = 1;
    while (b)
    {
        if(b&1){   //if 3^13  --> 13 --> 1101  -->  3^8 ^ 3^4 ^ 3^1 = 3^13
            ans=(ans*1LL*a)%M;
        }
            a = (a*a *1LL)%M; //might exceed 10^9 so we use 1ll to calculate in long long and then M it to keep the value in range
            //we can always do the question in long long but in some cases time complexity will be exceeded
            b>>=1;
    }
    return ans;
}
//recursive
int power(int a, int b){
    if(b==0 ) return 1;

    int temp = (power(a,b/2)*power(a,b/2))%M;
    int result = (temp*temp*1LL)%M;
    if(b&1){
        result = (result*a)%M;
    }
    return result;
}

//interative
// erricto
int power_it(int a, int b)
{
    int result =1;
    while(b>0){
        if(b%2==1) result*=a;
        a*=a;
        b/=2;
    }
    return result;
}

int main(int agrc, char *argv[]){
    //code
    int ans = bin_exp(2,8);
    cout<<ans;
    return 0;
}