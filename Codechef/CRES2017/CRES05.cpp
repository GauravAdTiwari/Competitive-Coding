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
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
        int k=1;
        for(int i=0;i<n;i++)
        {
            if(k%a[i]==b[i])
            {
                continue;
            }
            else
            {
                k++;
                i=0;
            }
        }
        cout<<k<<endl;
    }
}