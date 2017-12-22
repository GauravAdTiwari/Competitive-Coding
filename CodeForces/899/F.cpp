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
#define mp(x,y) make_pair(x,y)
#define eb emplace_back
#define pb push_back
#define lb lower_bound
#define F first
#define S second
#define si(n) scanf("%d",&n)
#define s2(x,y) scanf("%d%d",&x,&y)
#define sc(c) scanf("%c",&c)
#define sli(n) scanf("%lld",&n)
#define P(n) printf("%d\n",n)
#define PL(n) printf("%lld\n",n)
//void fast() {std::ios::sync_with_stdio(false);cin.tie(NULL);}
//lli power(lli a,lli b){lli ans=1;while(b!=0){ if(b%2==1){ans*=a;}b/=2;a*=a;} return ans;}
//lli invmod(lli a) {return pow(a,mod-2);}
void pall(int a[],int n){for(int i=0;i<n;i++) cout<<a[i]<<" ";}
const int N=200005;
int getInt(char ch) {
  if(ch >= 'a' && ch <= 'z') return ch - 'a';
  if(ch >= 'A' && ch <= 'Z') return ch - 'A' + 26;
  return 52 + ch - '0';
}
class BinaryIndexTree {
  vector<int > BIT;
  int sz;

public:

  BinaryIndexTree(int _sz) {
    sz = _sz;
    BIT.resize(_sz+1, 0);
  }

  void update(int idx, int val) {
    for(int i = idx; i < sz; i += i & -i) {
      BIT[i] += val;
    }
  }

  int query(int idx) {
    int res = 0;
    for(int i = idx; i; i -= i & -i) {
      res += BIT[i];
    }
    return res;
  }

};

BinaryIndexTree bit(N);
int n;
string s;
set<int> dist[66];
set<int>::iterator it;
bool rem[N];
int binary(int index){
    int res, low=1, high=n;
    while(low<=high){
        int mid=(low+high)>>1;
        int val=mid-bit.query(mid);
        if(val>=index){
            high=mid-1;
            res=mid;
        }
        else
            low=mid+1;
    }
    return res;
}
int main(){
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif*/

    int m;
    s2(n,m);
    cin>>s;
    rep(i,n){
        dist[getInt(s[i])].insert(i+1);
    }
    while(m--){
        int l,r;
        char c;
        s2(l,r);
        cin>>c;
        int x=getInt(c);
        l=binary(l);
        r=binary(r);
        it=dist[x].lower_bound(l);
        while(it!=dist[x].end() && (*it)<=r){
            int v=*it;
            rem[v-1]=true;
            bit.update(v,1);
            it++;
            dist[x].erase(v);
        }
    }
    string ans;
    rep(i,n){
        if(!rem[i])ans+=s[i];
    }
    cout<<ans;

    return 0;
}