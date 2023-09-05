#include<bits/stdc++.h>
using namespace std;

/*void rev_str(int l, int r,string &s){
    if(l>=r) return;
    swap(s[l],s[r]);
    rev_str(l+1,r-1,s);
    
}*/

void rev_str(int i, string &s){
    if(i>=s.size()/2) return;
    swap(s[i],s[s.size()-i-1]);
    rev_str(i+1, s);
}

int main(){
    string s;
    cin>>s;
    rev_str(0,s);
    cout<<s<<endl;
}