#include<bits/stdc++.h>
using namespace std;
int main()
{
  int i,n;
  double b,r,a,pi=3.1416;
  cin>>n;
  for(i=1;i<=n;i++)
  {
       cin>>r;
       b=2*r;
       a=b*b-pi*r*r;
       printf("Case %d: %0.2lf\n",i,a);
       // cout<<"Case "<<i<<": "<<a<<endl;
  }
}
