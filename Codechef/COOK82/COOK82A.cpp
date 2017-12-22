#include<bits/stdc++.h>
using namespace std;
int main()
{
    long int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d,bb;
        string aa;
        int i;
        for(i=0;i<4;i++)
        {
            cin>>aa>>bb;
            if(aa=="Barcelona")
            {
                a=bb;
            }
            if(aa=="Eiber")
            {
                b=bb;
            }
            if(aa=="RealMadrid")
            {   
                c=bb;
            }
            if(aa=="Malaga")
            {
                d=bb;
            }
        }
        if(a>b && c<d)
        cout<<"Barcelona";
        else
        cout<<"RealMadrid";
        cout<<"\n";
    }
}