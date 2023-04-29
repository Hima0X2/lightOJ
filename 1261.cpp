#include<bits/stdc++.h>
using namespace std;
int main()
{
     int i,n,a,b,c,d,e,f,g,h,j;
     cin>>n;
     for(i=1;i<=n;i++)
     {
          cin>>a>>b>>c>>d>>e>>f>>g>>h>>j;
          c=c+d+e+f+g+h+j;
          if(c==4)
          {
                cout<<"Case "<<i<<": Yes"<<endl;
          }
          else{
               cout<<"Case "<<i<<": No"<<endl;
          }
     }
}
