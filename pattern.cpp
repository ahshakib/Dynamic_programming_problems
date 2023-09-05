#include<bits/stdc++.h>
using namespace std;

void star(int n)
{
    if(n == 0) return;
    star(n-1);
    cout<<"1 ";
    star(n-1);
    cout<<"2 ";
    cout<<endl;
}

int main()
{
    int n,i;
    cin>>n;
    /*for(i = 0; i < n; i++){
        cout<<"* ";
    }*/
    star(n);
    return 0;
}
