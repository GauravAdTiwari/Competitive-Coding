//coded_by_LvnGDead :-)
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define lli long long int
#define endl "\n"
void fast() {std::ios::sync_with_stdio(false);cin.tie(NULL);}
long long int x, y, hcf;
void exteuclid(lli a, lli b){
    if(b==0){
        x=1;
        y=0;
        hcf=a;
    }
    else{
        exteuclid(b,a%b);
        lli temp=x;
        x=y;
        y=temp-((a/b)*y);
    }
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    fast();
    lli n, a, b;
    cin>>n>>a>>b;
    exteuclid(a,b);
    lli cof_a=(b/hcf);
    lli cof_b=(a/hcf);
    if(n<a && n<b){
        cout<<"NO";
        return 0;
    }
    else if(n<a || n<b){
        if(n<a){
            if(n%b!=0){
                cout<<"NO";
                return 0;
            }
        }
        else if(n<b){
            if(n%a!=0){
                cout<<"NO";
                return 0;
            }
        }
    }
    if(n%hcf!=0){
        cout<<"NO";
    }
    else{
        lli x1=(x*(n/hcf));
        lli y1=(y*(n/hcf));
        //cout<<x1<<" "<<y1;
        if(x1>=0 && y1>=0){
            cout<<"YES"<<"\n";
            cout<<x1<<" "<<y1;
        }
        else if(x1<0 && y1<0){
                cout<<"NO";
        }
        else{
            if(x1<0 && y1>=0){
                int flag=0;
                lli o=x1/cof_a;
                lli p=y1/cof_b;
                for(lli i=o;i<=p;i++){                    
                    if(((x1+(i*cof_a))>=0) && ((y1-i*cof_b)>=0)){
                        cout<<"YES"<<"\n";
                        cout<<x1+(i*cof_a)<<" "<<(y1-i*cof_b);
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    cout<<"NO";
                }
            }
            else if(x1>=0 && y1<0){
                long long int count=0;
                int flag=0;
                lli o=y1/cof_b;
                lli p=x1/cof_a;
                for(lli i=o;i<=p;i++){
                    if(((x1-(i*cof_a))>=0) && ((y1+i*cof_b)>=0)){
                        cout<<"YES"<<"\n";
                        cout<<x1-(i*cof_a)<<" "<<(y1+i*cof_b);
                        flag=1;
                        break;
                    }
                }
                if(flag==0){
                    cout<<"NO";
                }
            }
        }
    } 
    return 0;
}