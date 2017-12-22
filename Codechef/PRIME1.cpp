#include<bits/stdc++.h>
using namespace std;
int main()
{
    bool ar[32001];
    memset(ar,true,sizeof(ar));
    for(long int i=2;i*i<=32000;i++)
    {
        if(ar[i]==true)
        {
            for(long int j=i*i;j<=32000;j+=i)
            ar[j]=false;
        }
    }
    vector<long int> prime;
    for(long int i=2;i<=32000;i++)
    {
        if(ar[i])
        {
            prime.push_back(i);
        }        
    }
    int t;
    cin>>t;
    while(t--)
    {
        long long int m,n,i;
        cin>>m>>n;
        vector<long long int> v;
        for(i=m;i<=n;i++ )
        {
            if(i>1)
            v.push_back(i);
        }
        for(i=0;i<v.size();i++)
        {
            for(long int j=0;prime[j]*prime[j]<=v[i];j++)
            {
                if(v[i]%prime[j]==0 && v[i]!=0)
                {
                    v[i]=0;
                }
            }
        }
        for(long long int i=0;i<v.size();i++)
        {
            if(v[i]!=0)
            cout<<v[i]<<"\n";
        }
        cout<<"\n";
    }
}