#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    int i,j;
    int ar[140];
    for(int i=0;i<140;i++)
    {
        ar[i]=1;
    }
    for(i=2;i*i<=140;i++)
    {
        if(ar[i]==1)
        {
            for(j=i*i;j<=140;j+=i)
            {
                ar[j]=0;
            }
        }
    }
    while(t--)
    {
        int z;
        cin>>z;
        char s[z];
        char magical[z];
        for(int i=0;i<z;i++)
        {
            cin>>s[i];
        }
        for(int i=0;i<z;i++)
        {
            int k=(int)s[i];
            if(ar[k]==1 && k>=65)
            {
                magical[i]=s[i];
            }
            else
            {
                int m=0,n=0,d=k;
                while(ar[d]!=1)
                {
                    m++;
                    d++;
                }
                d=k;
                while(ar[d]!=1)
                {
                    n++;
                    d--;
                }
                if((n<=m || ((m+k)>=122)) && (k-n)>=65)
                {
                    magical[i]=(char)(k-n);
                }
                else
                {   if((k+m)>=65)
                    magical[i]=(char)(k+m);
                    else
                    magical[i]='C';    
                }
            }
        }
        for(int i=0;i<z;i++)
        {
            cout<<magical[i];
        }
        cout<<endl;  
    }
    return 0;
}

