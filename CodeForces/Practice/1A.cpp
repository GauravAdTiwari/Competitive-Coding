#include<bits/stdc++.h>
using namespace std;                                                  
int main()                                                            
{                                                                     
		long long int n,m,a,len,bred;                                            
        cin>>n>>m>>a;                                                       
        if(n%a==0)                                                          
        {                                                                   
           len=n/a;                                                         
        }                                                                   
        else                                                                
        {                                                                   
           len=n/a+1;                                                       
        }                                                                   
       if(m%a==0)                                                          
       {                                                                   	      
 	   bred=m/a;                                                         
       }                                                                   
       else                                                                
       {                                                                   
           bred=m/a+1;                                                       
       } 
       cout<<len*bred<<"\n";                                               
}             
