#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int n,k;
    cin>>n>>k;
    long long int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>y[i];
    }
    long long int d[n];
    for(int i=0;i<n;i++)
    {
        d[i]=ceil(sqrt(x[i]*x[i]+y[i]*y[i]));
    }
    sort(d,d+n);
    long long int r=d[k-1];
    cout<<r<<endl;
}