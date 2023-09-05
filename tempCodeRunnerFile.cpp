#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll n,k,i,j,c,t;
    cin>>t;
    for(c=1;c<=t;c++){
        cin>>n>>k;
        ll a[n],dp[k+1];
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        memset(dp,0,sizeof(dp));
        dp[0]=1;
        for(i=0;i<n;i++){
            for(j=a[i];j<=k;j++){
                dp[j] = dp[j]%100000007 + dp[j-a[i]]%100000007;
            }
        }
        cout<<"Case "<<c<<": "<<dp[k]<<endl;
    }
}