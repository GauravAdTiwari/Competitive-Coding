//coded_by_LvnGDead :-)
#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define rep(i,n) for(__typeof(n) i=0;i<n;i++)
#define rep1(i,n) for(__typeof(n) i=1;i<=n;i++)
#define afor(i,a,b) for(int i=a;i<=b;++i)
#define bfor(i,a,b) for(int i=a;i>=b;--i)
void fast() {std::ios::sync_with_stdio(false);cin.tie(NULL);}
int main(){
    fast();
    int n, l;
    lli ans=4e18, sum=0;
    cin>>n>>l;
    int c[n];
    rep(i,n)cin>>c[i];
    rep(i,n-1)c[i+1]=min(c[i+1],2*c[i]);
    bfor(i,n-1,0){
      int bottles=l/(1<<i);
      sum+=(long long) c[i]*bottles;
      l-=bottles<<i;
      ans=min(ans, sum + (l>0)*c[i]);
    }
    cout<<ans<<endl;
    return 0;
}