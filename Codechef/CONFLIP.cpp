#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int g;
        cin>>g;
        while(g--)
        {
            int ht,q;
            long long int n;
            cin>>ht>>n>>q;
            int a[n];
            if(ht==1)
            {
                memset(a,1,sizeof(a));
            }
            else
            {
                memset(a,2,sizeof(a));
            }
            long long int k=n;
            for(int i=0;i<n;i++)
            {
                a[i]+=(k%2);
                k--;
            }
            long long int count=0;
            if(q==1)
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i]%2!=0)
                    count++;
                }
            }
            else if(q==2)
            {
                for(int i=0;i<n;i++)
                {
                    if(a[i]%2==0)
                    count++;
                }
            }
            cout<<count;
            cout<<endl;
        }
    }
}