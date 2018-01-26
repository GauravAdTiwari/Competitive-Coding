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
int divisor(int n){
    lli res=0;
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i==0){
            if (n/i == i)
                res+=i;
            else{
                if(n/i != n)
                    res+=n/i;
                res+=i;
            }
        }
    }
    return res;
}
int main(){
    //fast();
    #ifndef ONLINE_JUDGE00
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 

    int n, q;
    cin>>q;
    for(int i=0; i< q; i++){
        cin>>n;
        cout<<divisor(n)<<endl;
    }
    return 0;
}