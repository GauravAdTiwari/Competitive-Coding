#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        k=k-1;
        int f=a[k],index;
        sort(a,a+n);
        for(int i=0;i<n;i++)
        {
            if(a[i]==f)
            index=i+1;
        }
        cout<<index;
        cout<<endl;
    }
}