// Given an array with N integers, find a subsequence of this array to maximize the sum of the subsequence.
// Condition: can't take 2 consecutive numbers
// [7, 10, 7, -2, 3] maximum sum = 17

#include<bits/stdc++.h>
using namespace std;

int arr[100000], N;

/*int dp[100000][2];
int max_sum(int pos, int prev){

    if(pos > N) return 0;
    if(dp[pos][prev] != -1) return dp[pos][prev];

    if(prev == 0){
        int val = max_sum(pos+1, 0);
        int val2 = max_sum(pos+1, 1) + arr[pos];

        return dp[pos][prev] = max(val, val2);
    }
    else{
        int val = max_sum(pos+1, 0);
        return dp[pos][prev] = val;
    }

}*/

int dp[100000];
int max_sum(int pos){
    if(pos > N) return 0;
    if(dp[pos] != -1) return dp[pos];

    return dp[pos] = max(max_sum(pos+2)+arr[pos], max_sum(pos+1));
}

int main(){
    int t,n,i;
    cin>>t;
    while(t--){
        memset(dp, -1, sizeof(dp));
        cin>>n;
        N = n-1;
        for(i=0; i<n; i++) cin>>arr[i];
        //cout<<max_sum(0,0)<<endl;
        cout<<max_sum(0)<<endl;
    }
}
