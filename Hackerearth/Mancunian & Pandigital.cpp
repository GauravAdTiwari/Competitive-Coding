#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[1000001];
    for(int i=0;i<=1000000;i++)
        ar[i]=0;
    for(int i=1;i<=1000000;i++)
    {
        int d=i,flag=0;
        int z[10];
        for(int k=0;k<10;k++)
            z[k]=0;
        while(d>0)
        {
            int a=d%10;
            z[a]++;
            d=d/10;
        }
        std::string s = std::to_string(i);
        int k=s.length();
        for(int l=1;l<=k;l++)
        {
            if(z[l]!=1 || z[0]!=0)
            {   
                flag=0;
                break;
            }
            else
            flag=1;
        }
            if(flag==1)
            ar[i]++;
    }
    for(int i=1;i<=1000000;i++){
    ar[i]+=ar[i-1];
    }
    long int q;
    scanf("%ld",&q);
    while(q--)
    {
        long int a,b,count=0;
        scanf("%ld %ld",&a,&b);
        count=ar[b]-ar[a-1];
        printf("%ld\n",count);
    }
}
