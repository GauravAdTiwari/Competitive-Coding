#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int a[26],c=0;
    memset(a,-1,sizeof(a));
    string s;
    cin>>s;
    long int len=s.size();
    for(int i=0;i<len;i++)
    {
        int k=(int)s[i];
        int l=k-97;
        a[l]+=1;
    }
    for(int i=0;i<26;i++)
    {
        if(a[i]!=-1)
        c+=a[i];
    }
    cout<<c;
    return 0;
}
