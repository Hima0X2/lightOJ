#include<bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if(n > 1)
        return n ;
    else
        return 1;
}

int main()
{
     long long int i,t,n,j,flag=0,sum=0;
     cin>>n;
     for(i=1;i<=n;i++)
     {
          cin>>t;
          // int p=factorial(t);
          for(j=1;fact(j)<=t;j++)
          {
               if(fact(j)==t)
               {
                    cout<<t<<endl;
                    break;
               }
               else
               {
                    sum=sum+fact(j);
               }
          }

     }
     return 0;
}
