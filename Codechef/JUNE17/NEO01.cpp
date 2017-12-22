#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n;
        cin>>n;
        long int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long int sum=0;
        int flag=0;
        long int count=0;
        for(int i=n-1;i>=0;i--)
        {
            if(flag==0)
            {
                if(a[i]>=0)
                {
                    count++;
                    sum+=a[i];
                }
                else
                {
                    if((a[i]+sum)*(count+1)>sum*count)
                    {
                        sum+=a[i];
                        count++;
                    }
                    else
                    {
                        sum*=count;
                        sum+=a[i];
                        flag=1;
                    }
                }
            }
            else
            {
                sum+=a[i];
            }
        }
        if(flag==0)
        sum*=count;
        cout<<sum<<"\n";
    }
}
