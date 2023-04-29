#include<bits/stdc++.h>
using namespace std;
int main()
{
     int n,i;
    char j[100],h[100];
     cin>>n;
     getchar();
     for(i=1;i<=n;i++)
     {
          gets(j);
         strcpy(h,j);
          strrev(j);
          if(strcmp(h,j)==0)
          {
               //cout<<"palindrome"<<endl;
               cout<<"Case "<<i<<": Yes"<<endl;
          }
          else
          {
               //cout<<"not palindrome"<<endl;
                cout<<"Case "<<i<<": No"<<endl;
          }
     }
     return 0;
}
