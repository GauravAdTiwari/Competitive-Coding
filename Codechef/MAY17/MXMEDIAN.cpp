#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        k=2*n+1;
        int ar[k];
        ar[0]=0;
        for(int i=1;i<=2*n;i++)
        {
            cin>>ar[i];
        }
        int s=sizeof(ar)/sizeof(ar[0]);
        sort(ar,ar+s);
        int br[n+1];
        int temp[n+1];
        for(int i=1;i<=n;i++)
        {
            br[i]=ar[n+i];
            temp[i]=ar[i];
        }
        if(n>1)
        {
            for(int i=1;i<=n;i++)
            {
                    ar[2*i]=br[i];
            }
            for(int i=1;i<=2*n;i=i+2)
            {
                  ar[i]=temp[(i+1)/2];
            }
        }
        int med=br[(n+1)/2];
        cout<<med<<"\n";
        for(int i=1;i<2*n;i++)
        {
            cout<<ar[i]<<" ";
        }
        cout<<ar[2*n]<<"\n";
    }
}