/* Given an array with N(N<1000) integers. Find a subsequence(A1,A2,...) of this array
to maximize the following expression:-
    1*A1 + 2*A2 + 3*A3 + 4*A4 + 5*A5 +...

    example:-
        N=5;
        A = [3,1,-1,100,2]
        maximum subsequence sum = 412; 3X1 + 1X2 + (-1)X3 + 100X4 + 2X5  
*/

#include<bits/stdc++.h>
using namespace std;

int dp[1000][1000],N, arr[1000];

int subseq(int pos, int item){
    if(pos>N) return 0;
    if(dp[pos][item] != -1) return dp[pos][item];
    return dp[pos][item] = max(subseq(pos+1, item), subseq(pos+1, item+1) + item*arr[pos]);
}

int main(){
    int i;
    cin>>N;
    memset(dp, -1, sizeof(dp));
    for(i=0; i<N ;i++) cin>>arr[i];
    cout<<subseq(0,1)<<endl;
}