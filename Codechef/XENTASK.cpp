#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,i;
        cin>>n;
        long long int yana[n];
        long long int xenny[n];
        for(i=0;i<n;i++)
        cin>>xenny[i];
        for(i=0;i<n;i++)
        cin>>yana[i];
        long long int a1=0,b1=0,a2=0,b2=0;
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                a1+=xenny[i];
                a2+=yana[i];
            }
            else
            {
                b1+=xenny[i];
                b2+=yana[i];
            }
        }
        if(a1+b2>a2+b1)
        cout<<(a2+b1);
        else
        cout<<(b2+a1);
        cout<<"\n";
    }
}