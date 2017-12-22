#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long int k,c=0;
    cin>>n>>k;
    int ar[n],a[n];
    for(int i=0;i<n;i++)
    a[i]=-1;
    for(int i=0;i<n;i++)
    cin>>ar[i];
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]<0)
        {
            ar[i]=ar[i]*(-1);
            ar[i+1]=ar[i+1]*(-1);
            a[i]=i+1;
            c++;
        }
    }
    if(ar[n-1]<0)
    {
        ar[n-1]=ar[n-1]*(-1);
        a[n-1]=n;
        c++;
    }
    cout<<c<<"\n";
    for(int i=0;i<n;i++)
    {
        if(a[i]>0)
        cout<<a[i]<<" ";
    }
}