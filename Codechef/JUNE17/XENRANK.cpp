#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int u,v;
        cin>>u>>v;
        long long int x=(u+v+1);
        long long int y=((x*(x-1))/2)+1;
        long long int z=y+u;
        cout<<z<<"\n";
    }
} 