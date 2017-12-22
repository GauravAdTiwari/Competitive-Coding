//coded_by_LvnGDead :-)
#include<bits/stdc++.h>
using namespace std;
void fast() {std::ios::sync_with_stdio(false);cin.tie(NULL);}
using namespace std;
unordered_map< int, vector<int> > store;
int frequency(int left, int right, int element){
    int a = lower_bound(store[element].begin(), store[element].end(), left) - store[element].begin();
    int b = upper_bound(store[element].begin(), store[element].end(), right) - store[element].begin();
    return b-a;
}
int main(){
    fast();
    int n,flag=0;
    long long int ans=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0; i< n; i++){
        int num=s[i]-'a';
        store[num].push_back(i+1);
    }
    for(int i=0; i< n-3; i++){
        for(int j=i+2; j< n-1; j++){
            if(s[i]==s[j]){
                if(frequency(i+1,n,s[i]-'a')==n && n>10){flag=1;break;}
                else{
                    for(int k=0; k< 26; k++){
                         ans+=frequency(i+2,j,k)*frequency(j+2,n,k);
                    }
                }
            }
        }
        if(flag==1){
            long long int bn,an=n*(n-1);
            bn=(n-2)*(n-3);
            ans=(an*bn)/24;
            break;
        }
    }
    cout<<ans;
    return 0;
}