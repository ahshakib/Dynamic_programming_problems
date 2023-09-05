#include<bits/stdc++.h>
using namespace std;

int knapsack(int n, int W, vector<int> &weight, vector<int> &price, vector<vector<int>>&dp){
    if(n == 0){
        if(weight[0] <= W) return price[0];
        else return 0;
    }

    if(dp[n][W] != -1) return dp[n][W];

    int val = 0 + knapsack(n-1, W, weight, price, dp);
    int val2 = INT_MIN;

    if(weight[n] <= W){
        val2 = price[n] + knapsack(n-1, W-weight[n], weight, price, dp);
    }

    return dp[n][W] = max(val, val2);
}

int main(){
    int t,w,i,p,n,g;
    cin>>t;
    while (t--){
        cin>>n;
        vector<int> price, weight;
        for(i=0;i<n;i++){
            cin>>p>>w;
            price.push_back(p);
            weight.push_back(w);
        }
        cin>>g;
        int sum = 0;
        while(g--){ 
            cin>>w;
            vector<vector<int>> dp(n, vector<int>(w+1, -1));
            sum += knapsack(n-1, w, weight, price, dp);
        }
        cout<<sum<<endl;
    }
}