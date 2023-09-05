#include<bits/stdc++.h>
using namespace std;

int dp[100][100];
string str="";
int lcs(int i, int j,string &s, string &s1){
    if(i<0 || j<0) return 0;
    if(dp[i][j] != -1) return dp[i][j];
    if(s[i] == s1[j]){
        str+=s[i];
        return 1 + lcs(i-1, j-1, s, s1);
    }
    return dp[i][j] = max(lcs(i-1, j, s, s1), lcs(i, j-1, s, s1));
}

int main(){

    memset(dp, -1, sizeof(dp));
    string s,s1;
    cin>>s>>s1;
    cout<<"LCS length is "<<lcs(s.size()-1, s1.size()-1 , s, s1)<<endl;
    cout<<str<<endl;
}