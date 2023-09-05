#include<bits/stdc++.h>
using namespace std;

void fun(int a[],int i, int n){
    if(i>n-i) return;
    cout<<a[i]<<" "<<a[n-i]<<endl;
    fun(a,i+1,n);
}

int main(){
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    fun(a,0, n-1);
}