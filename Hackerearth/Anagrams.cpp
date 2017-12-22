#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    int a1[10001];
    int a2[10001];
    cin>>t;
    while(t--){
        memset(a1,0,sizeof(a1));
        memset(a2,0,sizeof(a2));
        string s1, s2;
        cin>>s1>>s2;
        for(int i=0;i<s1.length();i++){
        	a1[(int)s1[i]]++;
        }
        for(int i=0;i<s2.length();i++){
        	a2[(int)s2[i]]++;
        }
        int count=0;
        for(int i=0;i<10001;i++){
        	if(a1[i]!=a2[i]){
        	     if(a1[i]>a2[i]){
        	          count+=a1[i]-a2[i];		
        	     }
        	     else
        	          count+=a2[i]-a1[i];
        	}
        }
        cout<<count<<endl;
    }
}