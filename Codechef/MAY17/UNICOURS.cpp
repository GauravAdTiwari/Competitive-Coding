#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,max=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        long int res=n-max;
        cout<<res<<"\n";
    }
}
