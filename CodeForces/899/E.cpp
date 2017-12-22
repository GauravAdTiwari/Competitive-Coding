//coded_by_LvnGDead :-)
//#include<bits/stdc++.h>
#include <iostream>
#include <set>
#include <algorithm>
#include <vector>
#include <map>
#include <cassert>
#include <string>
#include <queue>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <cstring>
#include <complex>
using namespace std;
typedef long long int lli;
#define mod 1e9+7
#define all(c) ((c).begin(), (c).end())
#define rep(i,n) for(__typeof(n) i=0;i<n;i++)
#define rep1(i,n) for(__typeof(n) i=1;i<=n;i++)
#define bc __builtin_popcountll
#define afor(i,a,b) for(int i=a;i<=b;++i)
#define bfor(i,a,b) for(int i=a;i>=b;--i)
#define mset(a,b) memset(a,b,sizeof(a))
#define srt(a,n) sort(a,a+n)
#define mcpy(a,b) memcpy(a,b,sizeof(b))
#define max(a,b) ((a)<(b)?(b):(a))
#define min(a,b) ((a)<(b)?(a):(b))
#define swap(a,b) a^=b^=a^=b
#define vi vector<int>
#define vlli vector<lli>
#define vvi vector < vi >
#define endl "\n"
#define pii pair<int,int>
#define pll pair<long long, long long>
#define plll pair<long long int, long long int, long long int>
#define inf 1000000000000000001;
#define mp make_pair
#define eb emplace_back
#define pb push_back
#define F first
#define S second
#define si(n) scanf("%d",&n)
#define s2(x,y) scanf("%d%d",&x,&y)
#define ss(s) scanf("%s",&s)
#define sc(c) scanf("%c",&c)
#define sli(n) scanf("%lld",&n)
#define P(n) printf("%d\n",n)
#define PL(n) printf("%lld\n",n)
//void fast() {std::ios::sync_with_stdio(false);cin.tie(NULL);}
//lli power(lli a,lli b){lli ans=1;while(b!=0){ if(b%2==1){ans*=a;}b/=2;a*=a;} return ans;}
//lli invmod(lli a) {return pow(a,mod-2);}
void pall(int a[],int n){for(int i=0;i<n;i++) cout<<a[i]<<" ";}
const int N=200001;
set<pii> ns;
set<int> ps;
int size[N];
set<int>::iterator it;
int a[N];
void pre(int index, int count){
    if(!count)return;
    ns.insert(mp(-count,index-count));
    size[index-count]=count;
    ps.insert(index-count);
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
    int n;
    si(n);
    int count=0;
    rep1(i,n){
        si(a[i]);
        if(a[i-1]==a[i])count++;
        else{
            pre(i,count);
            count=1;
        }
    }
    pre(n+1,count);
    int ans=0;
    while(ns.size()){
        ans++;
        pii p=*ns.begin();
        ns.erase(p);
        ps.erase(p.second);
        it = ps.lower_bound(p.second);
        if(it==ps.begin()||it==ps.end())continue;
        int y=*it--;
        int x=*it;
        if(a[x]==a[y]){
            ps.erase(y);
            ns.erase(mp(-size[y],y));
            ns.erase(mp(-size[x],x));
            size[x]+=size[y];
            ns.insert(mp(-size[x],x));
            
        }
    }
    cout<<ans;
    return 0;
}