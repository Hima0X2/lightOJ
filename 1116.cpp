#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t,n,i,m,j,p;
     cin>>t;
     for(i=1;i<=t;i++)
     {
          j=2;
          cin>>n;
         for(n%j==0)
          {
               m=n/2;
            if(m%2!=0)
            {
                 p=m;
            }
            else
            {
                 j=j+2;
            }
            cout<<"Case "<<i<<": "<<m<<" "<<j<<endl;
          }
          else
               cout<<"Case : Impossible "<<endl;
     }
}
