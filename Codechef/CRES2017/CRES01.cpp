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
        int max=0,index=0
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(max<a[i])
            {
                max=a[i];
                index=i;
            }
        }
        if(index==(n-1))
        {
            for(int i=1;i<n-1;i++)
            {
                sum+=(s-a[i]);
            }
            cout<<sum<<endl;
    }
}