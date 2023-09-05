#include<bits/stdc++.h>
using namespace std;
int a[53],dp[53][53];
int cutting(int l, int r){
    if(l+1 == r) return 0;
    if(dp[l][r] != -1) return dp[l][r];
    int m = INT_MAX;
    for(int i=l+1;i<r;i++){
        m = min(m, cutting(l,i) + cutting(i,r) + a[r]-a[l]);
    }
    return dp[l][r] = m;
}

int main(){
    int n,l,i;
    while(1){
        cin>>l;
        if(l==0) break;
        cin>>n;
        a[0]=0;
        for(i=1;i<=n;i++) cin>>a[i];
        a[n+1]=l;
        memset(dp, -1, sizeof(dp));
        cout<<"The minimum cutting is "<<cutting(0,n+1)<<"."<<endl;
    }
}