#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,m;
    cin>>n>>m;
    long int u;
    cin>>u;
    int a[n][m];
    long int w=0,r=0,b=0,k=0;
    memset(a,0,sizeof(a));
    while(u--)
    {
        long int x1,x2,y1,y2;
        char c;
        int z;
        cin>>x1>>y1>>x2>>y2>>c;
        if(c=='W')
        z=0;
        else if(c=='R')
        z=1;
        else if(c=='B')
        z=2;
        else if(c=='K')
        z=3;
        for(int i=(x1-1);i<x2;i++)
        {
            for(int j=(y1-1);j<y2;j++)
            {
                a[i][j]=z;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)
            w++;
            else if(a[i][j]==1)
            r++;
            else if(a[i][j]==2)
            b++;
            else if(a[i][j]==3)
            k++;
        }
    }
    cout<<w<<" "<<r<<" "<<b<<" "<<k;
    cout<<endl;
}