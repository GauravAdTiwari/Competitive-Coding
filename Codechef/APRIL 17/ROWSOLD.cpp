#include <bits/stdc++.h>
using namespace std;
 
int main()
{
	int t;
	cin>>t;
	while(t--)
    {
		int i,j=-1;
		long long cnt=0;
        long long int ans=0;
		string s;
		cin>>s;
		for(i=0;s[i]!='\0';i++)
        {
			if(s[i]=='1')
            {
				if(j==-1)
                {
					j=i;
					cnt++;
				}
				else{
					ans+=(cnt*(i-j-1));
					if(i-j!=1)
						ans+=cnt;
					j=i;
					cnt++;
				}
			}
		}
		i--;
		if(s[i]=='0'&&j!=-1){
			ans+=(cnt*(i-j+1));
		}
		cout<<ans<<endl;
	}
	return 0;
} 