//coded_by_LvnGDead :-)
#include<bits/stdc++.h>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <complex>
using namespace std;
typedef long long LL;
#define lli long long int
#define mod 1e9+7
#define all(c) ((c).begin(), (c).end())
#define REP(i,n) for(__typeof(n) i=0;i<n;i++)
#define REP1() for(__typeof(n) i=1;i<=n;i++)
#define mset(a,b) memset(a,b,sizeof a)
#define mcpy(a,b) memcpy(a,b,sizeof b)
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
#define sli(n) scanf("%lld",&n)
#define printi(n) printf("%d\n",n)
#define printli(n) printf("%lld\n",n)
void fast() {std::ios::sync_with_stdio(false);cin.tie(NULL);}
lli power(lli a,lli b){lli ans=1;while(b!=0){ if(b%2==1){ans*=a;}b/=2;a*=a;} return ans;}
lli invmod(lli a) {return pow(a,mod-2);}
void print(int a[],int n){for(int i=0;i<n;i++) cout<<a[i]<<" ";}
using namespace std;
int bsearch(int low,int high,int key,int a[])
{ int len=high;
   while(low<=high)
   {
     int mid=(low+high)/2;
     if(a[mid]<key)
     {
         low=mid+1;
     }
     else if(a[mid]>key)
     {
         high=mid-1;
     }
     else if(a[mid]==key)
     {
         return mid+1;
     }
   }
    if( low > len)
        return -1;
    else
        return (low < high)?low+2 : high+2;
 }
int main(){
	#ifndef ONLINE_JUDGE
    	freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif

    int t;
    cin>>t;
    int ar[t];
    for (int i = 0; i < t; i++)
    {
    	cin>>ar[i];
    }
    int d[t];
    d[0]=ar[0];
    for (int i = 1; i < t; i++)
    {
    	d[i]=d[i-1]+ar[i];
    }
    cout<<endl;
    int query,pos=-1;
    cin>>query;
    for (int i = 0; i < query; i++)
    {
    	int q;
    	si(q);
    	pos=bsearch(0,t-1,q,d);
    		cout<<pos<<endl;
    }
    return 0;
}