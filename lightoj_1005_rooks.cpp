#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll dp[32][32];

ll ncr(ll n, ll r){
    if(n==r || r==0) return 1;
    else if(r==1) return n;
    else if(dp[n][r] != -1) return dp[n][r];
    return dp[n][r] = ncr(n-1, r) + ncr(n-1, r-1);
}

int main(){
    ll t,n,i,k;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n>>k;
        if(n<k) {
            cout<<"Case "<<i<<": "<<0<<endl;
        }
        else{
            memset(dp, -1, sizeof(dp));
            ll res = ncr(n,k);
            ll K,c=1;
            if(k>0){
                for(K=2;K<=k;K++) c*=K;
            }
            cout<<"Case "<<i<<": "<<res*res*c<<endl;
        }
    }
}