//coded_by_LvnGDead :-)
#include<bits/stdc++.h>
using namespace std;
int main(){

	#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

	int x, h, m;
    cin>>x;
    cin>>h>>m;
    if(h%10 == 7 || m%10==7){
		cout<<"0";   	
		return 0;
	}
	int count=0;
	while(1){
		count++;
		if(x<=m)
			m-=x;
		else if(x>m){
			if(h==0)h=24;
			h-=1;
			m=(60+m)-x;
		}
		if(h%10 == 7 || m%10==7){
			cout<<count<<endl;   	
			return 0;
		}
	}	
    return 0;
}