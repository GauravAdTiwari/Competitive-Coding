#include <bits/stdc++.h>
using namespace std;
 int main()
{ 
	int a, b;
	cin>>a>>b;
	int r = (a - b);
	if(r%10 == 9)
	{
		if(r/10)
			cout<<r/10<<"8";
		else
			cout<<"8";
	}
	else 
	{
		if(r/10)
			cout<<r/10<<"9";
		else
			cout<<"9";
	}
 	return 0;
}