#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],b[k];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<k;i++)
    {
        cin>>b[i];
    }
    sort(b,b+k,greater<int>());
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            a[i]=b[j];
            j++;
        }
    }
    int flag=0;
    int count=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]<a[i])
        {
            flag=1;
            break;
        }
        if(a[i+1]==a[i])
        {
            count++;
        }
    }

    if(flag==1 || count==n-1)
    {
        cout<<"Yes"<<endl;
    }
    else
        cout<<"No"<<endl;
}