//coded_by_LvnGDead :-)
#include<bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <complex>
using namespace std;
typedef long long ll;
#define lli long long int
#define mod 1e9+7
#define all(c) ((c).begin(), (c).end())
#define rep(i,n) for(__typeof(n) i=0;i<n;i++)
#define rep1() for(__typeof(n) i=1;i<=n;i++)
#define bc __builtin_popcountll
#define afor(i,a,b) for(int i=a;i<=b;++i)
#define bfor(i,a,b) for(int i=a;i>=b;--i)
#define mset(a,b) memset(a,b,sizeof(a))
#define mcpy(a,b) memcpy(a,b,sizeof(b))
#define max(a,b) ((a)<(b)?(b):(a))
#define swap(a,b) a^=b^=a^=b
#define vi vector<int>
#define vlli vector<lli>
#define vvi vector < vi >
#define endl "\n"
#define pii pair<int,int>
#define pll pair<long long, long long>
#define inf 1000000000000000001;
#define mp(x,y) make_pair(x,y)
#define eb emplace_back
#define pb push_back
#define F first
#define S second
#define si(n) scanf("%d",&n)
#define ss(s) scanf("%s",&s)
#define sc(c) scanf("%c",&c)
#define sli(n) scanf("%lld",&n)
#define printi(n) printf("%d\n",n)
#define printli(n) printf("%lld\n",n)
void fast() {std::ios::sync_with_stdio(false);cin.tie(NULL);}
lli power(lli a,lli b){lli ans=1;while(b!=0){ if(b%2==1){ans*=a;}b/=2;a*=a;} return ans;}
lli invmod(lli a) {return pow(a,mod-2);}
void print(int a[],int n){for(int i=0;i<n;i++) cout<<a[i]<<" ";}
int main(){
	/*#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif
*/
    int n;
    cin>>n;
    int a[n+1];
    for(int i=1; i<= n; i++){
    	cin>>a[i];
    }
    int mon[61],c=0;
    for(int i=1; i< 61; i++){
    	mon[i]=31;
    }	
    mon[2]=mon[14]=mon[38]=mon[50]=28;
    mon[26]=29;
    mon[4]=mon[6]=mon[9]=mon[11]=30;
    mon[16]=mon[18]=mon[21]=mon[23]=30;
    mon[28]=mon[30]=mon[33]=mon[35]=30;
    mon[40]=mon[42]=mon[45]=mon[47]=30;
    mon[52]=mon[54]=mon[57]=mon[59]=30;
    int flag=0;
    for(int i=1; i<= 60; i++){
    	c=0;
    	for(int j=0; j<n ; j++){
    		if(a[j+1]!=mon[i+j]){
    			break;
    		}
    		else{
    			c++;
    			if(c==n){
    				flag=1;
    				break;
    			}
    		}
    	}
    	if(flag==1)break;
    }
    if(flag==1){
    	cout<<"Yes";
    }
    else
    	cout<<"No";
    return 0;
}