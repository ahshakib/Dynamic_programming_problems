#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i,j,a,b,c;
    cin>>n;
    vector<pair<pair<int>,int>>> v;
    for(i=0;i<n;i++){
        cin>>a>>b>>c;
        v.push_back(make_pair(make_pair(a,b),c));
    }
    
    cout<<endl<<endl;
    for(i=0;i<n;i++){
        cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<endl;
    }
}