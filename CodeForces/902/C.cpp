//coded_by_LvnGDead :-)
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
#define rep(i,n) for(__typeof(n) i=0;i<n;i++)
#define rep1(i,n) for(__typeof(n) i=1;i<=n;i++)
#define vi vector<int>
#define pb push_back
void fast() {std::ios::sync_with_stdio(false);cin.tie(NULL);}
const int N=200005;
vi v[N];
int h, a[N],sum;
int main(){
    fast();
    cin>>h;
    h++;
    bool unique=true;
    rep(i,h){
        cin>>a[i];
        sum+=a[i];
        if(i>1 && a[i]>1 && a[i-1]>1)unique=false;
    }
    if(unique){cout<<"perfect";return 0;}
    cout<<"ambiguous"<<endl;
    v[0].pb(0);
    rep1(i,sum)
        rep(j,a[i-1]){
            v[i].pb(v[i-1].back()+j+1);
            cout<<(v[i-1][0])<<" ";
        }
    cout<<endl;
    rep1(i,sum)rep1(j,a[i-1])cout<<(v[i-1][j%v[i-1].size()])<<" ";
    return 0;
}