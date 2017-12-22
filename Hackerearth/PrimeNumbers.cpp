#include<bits/stdc++.h>
using namespace std;
int main(){
    bool prime[1001];
    memset(prime, true, sizeof(prime));
    int n;
    cin>>n;
    for(int i=2;i*i<=n;i++){
        if(prime[i]==true){
            for(int j=i*i;j<=n;j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=2;i<=n;i++){
        if(prime[i]==true){
            cout<<i<<" ";
        }
    }
}