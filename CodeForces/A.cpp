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
void fast() {std::ios::sync_with_stdio(false);cin.tie(NULL);}
//lli power(lli a,lli b){lli ans=1;while(b!=0){ if(b%2==1){ans*=a;}b/=2;a*=a;} return ans;}
//lli invmod(lli a) {return pow(a,mod-2);}
void pall(int a[],int n){for(int i=0;i<n;i++) cout<<a[i]<<" ";}
int main(){
    //fast();
    /*#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif */

    string s;
    cin>>s;
    int n=s.length(),count=0;
    rep(i,n)if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || ((int)s[i]-'0' <= 9 && ((int)s[i]-'0')%2!=0))count++;
    cout<<count;
    return 0;
}