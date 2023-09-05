/* Given an array with N(N<100000) integers. Find a subsequence(A1,A2,...) of this array
to maximize the following expression:-
    A1 - A2 + A3 - A4 + A5 -......

    example: N=4
    Array = [1,-1,1,-1]
    output: 4
     
*/

#include<bits/stdc++.h>
using namespace std;

int dp[100000][2], N, arr[100000];

int subseq(int pos, int flag){
    if(pos>N) return 0;
    if(dp[pos][flag] != -1) return dp[pos][flag];
    int val, val2;
    val = subseq(pos+1, flag);
    if(flag==0){
        val2 = subseq(pos+1, 1) + arr[pos];
    }
    if(flag==1) val2 = subseq(pos+1, 0) - arr[pos];
    return dp[pos][flag] = max(val, val2);
}

int main(){
    memset(dp, -1, sizeof(dp));
    cin>>N;
    int i;
    for(i=0;i<N; i++) cin>>arr[i];
    cout<<subseq(0, 0)<<endl;
}
