#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,count=0,i;
        cin>>n;
        string s;
        cin>>s;
        for(i=0;i<n;i++)
        {
            if(s[i]=='0')
            {
                count++;   
            }
        }
        cout<<count<<endl;
    }
}