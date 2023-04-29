#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,a,b,c,i;
     cin>>n;
     for(i=1;i<=n;i++)
     {
          cin>>a>>b>>c;
          if((c>a)&&(c>b))
          {
               if((c*c-a*a-b*b)==0)
               {
                    cout<<"Case "<<i<<": yes"<<endl;
               }
               else
               {
                    cout<<"Case "<<i<<": no"<<endl;
               }
          }
          else  if((c<a)&&(a>b))
          {
               if((a*a-c*c-b*b)==0)
               {
                    cout<<"Case "<<i<<": yes"<<endl;
               }
               else
               {
                    cout<<"Case "<<i<<": no"<<endl;
               }
          }
          else if((b>a)&&(c<b))
          {
               if((b*b-a*a-c*c)==0)
               {
                    cout<<"Case "<<i<<": yes"<<endl;
               }
               else
               {
                    cout<<"Case "<<i<<": no"<<endl;
               }
          }
          else
          {
                 cout<<"Case "<<i<<": no"<<endl;
          }
     }
}
