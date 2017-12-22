#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,k,r=0;
		cin>>n>>k;
		int a[k+1];
        for(int i=0;i<k+1;i++)
            a[i]=0;
		for(int j=0;j<n;j++)
		{
            int o;
			cin>>o;
            int c=0;
            for(int i=0;i<o;i++)
            {
                int z;
                cin>>z;
                if(a[z]==1)
                {
                    c++;
                }
                else
                a[z]++;   
            }
            if(c==o)
                r++;
		}
        int flag=0;
		for(int i=1;i<=k;i++)
        {
            if(a[i]<1)
            {
                flag=0;
                break;
            }
            else
            {
                flag=1;
            }
        }
        if(flag==0)
        cout<<"sad"<<"\n";
        else if(flag==1)
        {
            if(r>0)
            cout<<"some"<<"\n";
            else
            cout<<"all"<<"\n";
        }
	}
	return 0;
}
