#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,i,a,b,sum;
     cin>>t;
     for(i=1;i<=t;i++)
     {
          cin>>a>>b;
          if(a<=b){
                sum=19+4*b;
          cout<<"Case "<<i<<": "<<sum<<endl;
          }
         else{
           sum=19+4*a+4*(a-b);
          cout<<"Case "<<i<<": "<<sum<<endl;
         }
     }
}
