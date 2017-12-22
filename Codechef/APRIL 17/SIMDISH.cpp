#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a[4],b[4];
        for(int i=0; i<4;i++)
            cin>>a[i];
        for(int i=0; i<4;i++)
            cin>>b[i];
        int flag=0;
        int c=0;
        for(int i=0;i<4;i++)
        {
            string s1,s2;
            for(int j=0;j<4;j++)
            {
                s1=a[i];
                s2=b[j];
                if(s1==s2)
                {
                    c++;
                    break;
                }
            }
            if(c>=2)
            {
                flag=1;
                break;
            }
        }
        if(flag==1)
        cout<<"similar"<<"\n";
        else
        cout<<"dissimilar"<<"\n";
	}
	return 0;
}
