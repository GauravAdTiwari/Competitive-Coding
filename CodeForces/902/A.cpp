//coded_by_LvnGDead :-)
#include<bits/stdc++.h>
#define mset(a,b) memset(a,b,sizeof(a))
using namespace std;
int main(){
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/
    int n,m;
    cin>>n>>m;
    int a[n], b[n];
    for(int i=0; i< n;i++){
        cin>>a[i]>>b[i];
    }
    int x[200];
    mset(x,0);
    for(int i=0; i< n; i++){
        int val=a[i];
        for(int j=0; j<b[i]-a[i]; j++){
            x[a[i]+j]=1;
        }
    }
    int flag=1;
    for(int i=0; i< m; i++){
        if(x[i]!=1){
            flag=0;
            break;
        }
    }
    if(flag==1)
        cout<<"YES";
    else
        cout<<"NO";

    return 0;
}