#include<iostream>
using namespace std;
int main()
{
    int n;
    long long int m;
    cin>>n>>m;
    int ar[n][n];
    long long int sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>ar[i][j];
            sum+=ar[i][j];
        }
    }
    if(sum>=(((n*(n+1))/2)*n))
    {
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            ar[i][j]=i+1;
            sum-=i+1;
        }
    }
    if(sum>0)
    {
        for(int i=n-1;i>=0;i--)
        {   
            if(sum>0)
            {
            for(int j=n-1;j>=0;j--)
            {
                long long int z=ar[i][j];
                long long int k=(m-z);
                if(sum>=k)
                {
                    ar[i][j]=m;
                    sum-=k;
                }
                else
                {
                
                    ar[i][j]=z+sum;
                    sum=0;
                }
            }
            }
        }
    }
    }
    else
    {
        
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ar[i][j]<<" ";
        }
        cout<<"\n";
    }
}