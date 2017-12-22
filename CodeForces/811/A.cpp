#include <bits/stdc++.h>
using namespace std;
int main() 
{
	long int a,b;
	cin>>a>>b;
	long int j=1;
	int flag=0;
	for(int i=1;;i++)
	{
		if(flag==0)
		{	if(a>=j)
			{	
				a-=j;
				flag=1;
			}
			else
			{
				cout<<"Vladik"<<"\n";
				break;
			}
		}
		else if(flag==1)	
		{
			if(b>=j+1)
			{
				b-=j+1;
				j=j+2;
				flag=0; 
			}
			else
			{
				cout<<"Valera"<<"\n";
				break;
			}
		}
	}
}

