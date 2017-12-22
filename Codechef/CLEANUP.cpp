#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>n>>m;
        int a[n];
        memset(a,-1,sizeof(a));
        for(int i=0;i<m;i++)
        {
            int z;
            cin>>z;
            a[z-1]=0;
        }
        int x,y;
        if((n-m)%2==0)
        {
            x=(n-m)/2;
            y=(n-m)/2;
        }
        else
        {
            x=((n-m)+1)/2;
            y=((n-m)-1)/2;
        }
        int j[x],k[y],o=0,p=0,c=1;
        for(int i=0;i<n;i++)
        {
            if(a[i]!=0 && c==1 && o<x)
            {
                j[o++]=i+1;
                c=0;
            }
            else if(a[i]!=0 && c==0 && p<y)
            {
                k[p++]=i+1;
                c=1;
            }
        }
        for(int i=0;i<x;i++)
        cout<<j[i]<<" ";
        cout<<endl;
        for(int i=0;i<y;i++)
        cout<<k[i]<<" ";
        cout<<endl;
    }
    
}