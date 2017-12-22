#include<bits/stdc++.h>
using namespace std;
int main()
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
    int c[n];
    for(int i=0;i<n;i++)
    {
        c[i]=i+1;
    }
    int d[n],e[n],f[n],count=0;
    for(int i=0;i<n;i++)
        f[i]=-1;
    int j=0;
    for(int i=0;i<n;i++)
    {
        d[i]=a[i];
        e[i]=b[i];
        if(a[i]!=b[i])
        {
            count++;
            f[j]=i;
            j++;
        }
    }
    int k=0;
    if(count>=2)
    {
        int flag1=0;
        while(f[k]!=-1)
        {
            int temp;
            temp=d[f[k]];
            d[f[k]]=e[f[k]];
            e[f[k]]=temp;
            int xx=0,yy=0,kk=0,mm=0;
            
            for(int i=0;i<n;i++)
            {
                if(d[i]!=a[i])
                {
                    xx++;
                }
                if(d[i]!=b[i])
                {
                    yy++;
                }
                if(e[i]!=a[i])
                {
                    kk++;
                }
                if(e[i]!=b[i])
                {
                    mm++;
                }
            }
            if((xx==1 && yy==1) || (kk==1 && mm==1))
            {
                if(xx==1 && yy==1)
                {
                    flag1=1;
                    break;
                }
                else
                {
                    flag1=2;
                    break;
                }
            }  
            else
            {
                int temp;
                temp=d[f[k]];
            d[f[k]]=e[f[k]];
            e[f[k]]=temp;
            }   
            k++;   
        }
        if(flag1==1)
        {
            for(int i=0;i<n;i++)
            {
                cout<<d[i]<<" ";
            }
            cout<<endl;
        }
        else if(flag1==2)
        {
            for(int i=0;i<n;i++)
            {
                cout<<e[i]<<" ";
            }
            cout<<endl;
        }
    }
        else
        {
            c[d[f[0]]-1]=-1;
            c[e[f[0]]-1]=-1;
            for(int i=0;i<n;i++)
            {
                if(a[i]==b[i])
                {
                    c[a[i]-1]=-1;
                }
            }
            for(int i=0;i<n;i++)
            {
                if(c[i]!=-1)
                {
                    d[f[0]]=c[i];
                    break;
                }
            }
            for(int i=0;i<n;i++)
            {
                cout<<d[i]<<" ";
            }
            cout<<endl;
        }
    }