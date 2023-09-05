#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,k,i,j,c,t;
    cin>>t;
    ll a[101],dp[10001];
    for(c=1;c<=t;c++){
        cin>>n>>k;
        for(i=1;i<=n;i++) cin>>a[i];
 
        memset(dp, 0, sizeof(dp));
        dp[0]  = 1;
        for(i = 1; i <= n; i++ ){
            for(j = 1; j <= k; j++){
                if(a[i]<= j){
                    dp[j] = dp[j] + dp[j-a[i]];
                }
                if(dp[j] > 100000007){
                    dp[j] %= 100000007;
                }
            }
        }
 
        cout<<"Case "<<c<<": "<<dp[k]<<endl;
 
    }
    return 0;
}