// Given a 2xN Grid, how many ways we can cover the grid with tiles?
// Tiles: 2x1, 2x2
// No rotation allowed

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int dp[10000];

ll grid(ll n){
    if(n == 1) return 1;
    if(n == 2) return 2;
    if(dp[n] != -1) return dp[n];
    return dp[n] = grid(n-1) + grid(n-2);
}

int main(){
    ll t,n;
    cin>>t;
    while(t--){
        memset(dp, -1, sizeof(dp));
        cin>>n;
        cout<<grid(n)<<endl;
    }
}