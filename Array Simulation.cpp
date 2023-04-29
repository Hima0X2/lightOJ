/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e7+123;
long long int a[mx],b[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,m,d=0;
     cin>>t;
     while(t--){
cin>>n>>m;
for(i=0;i<n;i++){
     cin>>a[i];
}
while(m--){
     char c;
     cin>>c;
     if(c=='S'){
               int p;
     cin>>p;
          for(i=0;i<n;i++){
               a[i]=a[i]+p;
          }
     }
     else if(c=='M'){
               int p;
     cin>>p;
          for(i=0;i<n;i++){
               a[i]=a[i]*p;
          }
     }
     else if(c=='D'){
               int p;
     cin>>p;
          for(i=0;i<n;i++){
               a[i]=a[i]/p;
          }
     }
      else if(c=='P'){
               int p,q;
     cin>>p>>q;
        swap(a[p],a[q]);
     }
     else if(c=='R'){
               int j=0;
          for(i=n-1;i>=0;i--){
               b[j]=a[i];
               j++;
          }
           for(i=0;i<n;i++){
              a[i]=b[i];
          }
     }
}
cout<<"Case "<<++d<<":\n";
 for(i=0;i<n;i++){
             cout<<a[i]<<" ";
          }
          cout<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




