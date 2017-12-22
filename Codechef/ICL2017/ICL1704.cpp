#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int m;
        long long int c=0;
        scanf("%ld",&m);
        long int ar[m];
        for(long int i=0;i<m;i++)
        scanf("%ld",&ar[i]);
        for(long int i=0;i<m-1;i++)
        {
            if(ar[i]>ar[i+1] || ar[i]<ar[i+1])
            {
                c+=(ar[i]+ar[i+1])-1;
                ar[i+1]=ar[i]+ar[i+1];
            }
            else
            {
                v.push_back(a[i]);
            }
        }
        long int k=v.size();
        int a[k+1];
        a[0]=ar[n];
        for(long int i=0;i<v.size();i++)
        {
            a[i+1]=v[i];            
        }
        for(long int i=0;i<k+1;i++)
        {
            if(ar[i]>ar[i+1] || ar[i]<ar[i+1])
            {
                c+=(ar[i]+ar[i+1])-1;
                ar[i+1]=ar[i]+ar[i+1];
            }
        }
        printf("%lld\n",c);
    }    
}