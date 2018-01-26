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
	
	lli n, T;
	cin>>n>>T;
	lli a[n], t[n];
	rep(i,n)cin>>a[i]>>t[i];
	lli low=0, high=n, mid;
	vector<int> v;
	while(low < high){
		mid=(low + high + 1)>>1;
		vector<pair<int, int>> p;
		rep(i,n){
			if(a[i]>=mid)
				p.eb(t[i], i);
		}
		sort(p.begin(), p.end());
		bool flag=false;
		if(p.size()>=mid){
			lli sum=0;
			rep(i,mid)
				sum+=p[i].first;
			if(sum<=T){
				v.resize(mid);
				flag=true;
				rep(i,mid)
					v[i]=p[i].second;
			}			
		}
		if(flag)low=mid;
		else high=mid-1;
	}
	cout<<v.size()<<endl<<v.size()<<endl;
	rep(i,v.size()){
		if(i>0)cout<<' ';
		cout<<v[i]+1;
	}

    return 0;
}