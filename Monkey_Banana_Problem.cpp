#include <bits/stdc++.h>
using namespace std;
#define ll long long int

ll N;
ll dp[205][205], a[205][205];

ll f(ll i, ll j){
    if(i == N-1) return a[i][j];
    if(a[i][j] == -1) return -1;
    if(dp[i][j] != -1) return dp[i][j];

    dp[i][j] = a[i][j] + max(f(i+1, j), f(i+1, j+1));

    return dp[i][j];
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,i,j,x,t,c;
    cin>>t;
    for(c=1; c<=t; c++){
        memset(dp, -1, sizeof(dp));
        memset(a, -1, sizeof(a));
        cin>>n;
        N=2*n-1;
        
        for(i=0; i<n; i++){
            for(j=0; j<=i; j++) cin>>a[i][j];
        }
        x=1;
        for(i=n; i<N; i++){
            for(j=x; j<n; j++) cin>>a[i][j];
            x++;
        }
        
        cout<<"Case "<<c<<": "<<f(0,0)<<endl;
        
    }
}