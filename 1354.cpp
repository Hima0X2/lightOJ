#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,j=0,a[100],b[100];
     cin>>n;
     for(i=1;i<=n;i++)
     {
          cin>>a[i];
          while(a[j]>0)
          {
          b[j]=a[j]%2;
          a[j]=a[j]/2;
          if(a[j]=='.')
          {
               cout<<a[j];
          }
          j++;
          }

     }
}
