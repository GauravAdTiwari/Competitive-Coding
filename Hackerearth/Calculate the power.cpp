#include <iostream>
using namespace std;
long long bin_expo(long long int A, long long int B, long long int M);
int main()
{
    long int a;
    long long int b;
    long long int m=1000000007;
    cin>>a>>b;
    long long int c=bin_expo(a,b,m);
    cout<<c;
    return 0;
}
long long bin_expo(long long int A, long long int B, long long int M)
{
    if(B == 0)
        return 1;

    if(B % 2 == 1) {
        long long x = bin_expo(A, (B-1)/2, M);
        x = (x*x) % M;
        return (x*A) % M;
    }
    else {
        long long x = bin_expo(A, B/2, M);
        return (x*x) % M;
    }
}
