#include<iostream>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long int a,b;
        cin>>a>>b;
        if(a>b)
        {
            int c=a;
            a=b;
            b=c;
        }
        if((a%2)==0 && a+2==b)
        {
            cout<<"YES"<<"\n";
        }
        else if(a%2==1 && a+2==b)
        {
            cout<<"YES"<<"\n";
        }
        else if(a%2==1 && b%2==0 && b-a==1)
        {
            cout<<"YES"<<"\n";
        }
        else 
        cout<<"NO"<<"\n";
    }
}