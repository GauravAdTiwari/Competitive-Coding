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
char getchar(int n, int b){
    if(n>=0 && n<=9)
        return ((char)(n + '0'));
    else
        return ((char)((n-b) + 'A'));
}
void strev(char *str)
{
    lli len = strlen(str);
    lli i;
    for (i = 0; i < len/2; i++)
    {
        char temp = str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = temp;
    }
}
char* basechange(lli n, int b, char res[]){
    lli index=0;
    while(n>0){
        res[index++]=getchar(n%b,b);
        n/=b;
    }
    res[index]='\0';
    strev(res);
    return res;
}
char res[100];
int main(){
    //fast();
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif 
    lli n;
    do{
        if(scanf("%lld",&n)!=EOF){
            if(n!=0)
                cout<<basechange(n,9,res)<<endl;
            else
                cout<<"0"<<endl;
        }
        else 
            break;
    }while(1);
    return 0;
}