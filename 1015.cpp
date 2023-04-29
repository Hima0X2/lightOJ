#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,j,a,b,sum=0;
     cin>>n;
     for(i=1;i<=n;i++)
     {
          cin>>a;
          for(j=0;j<a;j++)
          {
               cin>>b;
               if(b>0){
               sum=sum+b;}
          }
          if(sum>0)
          {
               cout<<"Case "<<i<<": "<<sum<<endl;
          }

          sum=0;
     }
     return 0;
}
