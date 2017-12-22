#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int n,k;
	float total=0;
	cin>>n>>k;
	int ar[n];
	for(int i=0;i<n;i++)
	{
		cin>>ar[i];
		total+=ar[i];
	}
	float roundoff=round(total/n);
	if(roundoff<k)
	{
	
		int num=((k-0.5)*n-total)/0.5;
		cout<<num<<"\n";
	}
	else
		cout<<0<<"\n";
}

