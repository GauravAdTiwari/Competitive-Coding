#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int flag=1;
        for(int i=0;i<s.length()-1;i++)
        {
            if(s[i]=='S' && s[i+1]=='E' || s[i]=='S' && s[i+1]=='C' || s[i]=='E' && s[i+1]=='C')
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        cout<<"yes";
        else
        cout<<"no";
        cout<<"\n";
    }
}
