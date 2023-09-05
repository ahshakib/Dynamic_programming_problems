#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll> v,v1;

ll dp[1005][55];

int fun(ll k, ll id){
    if(k==0) return 1;
    if(k<0) return 0;
    if(id == v.size()){
        if(k==0) return 1;
        else return 0;
    }
    if(dp[k][id]!=-1) return dp[k][id];
    ll sum=0;

    for(ll i = 0; i<=v1[id]; i++){
        sum = (sum%100000007 + (fun(k-i*v[id], id+1))%100000007)%100000007;
    }
    return dp[k][id] = sum;
}

int main(){
    ll t,n,k,i,j,a;
    cin>>t;
    for(j=1;j<=t;j++){
        memset(dp, -1, sizeof(dp));
        cin>>n>>k;
        for(i=0;i<n;i++){
            cin>>a;
            v.push_back(a);
        }
        for(i=0;i<n;i++){
            cin>>a;
            v1.push_back(a);
        }
        cout<<"Case "<<j<<": "<<fun(k,0)<<endl;
        v.clear();
        v1.clear();
    }
}