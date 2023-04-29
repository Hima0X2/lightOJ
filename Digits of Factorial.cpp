/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int fac(long long int n){
     if(n==1||n==0){
          return 1;
     }
     return n*fac(n-1);
}
 const long long int mx = 1e6+123;
double a[mx];
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,b,d=0;
     for(i=1;i<=1000000;i++){
          a[i]=a[i-1]+log10(i);
     }
//           for(i=0;i<=10;i++){
//          cout<<"factorial of "<<i<<" : "<<fac(i)<<" "<<floor(a[i])<<endl;
//     }
      cin>>t;
     while(t--){
cin>>n>>b;
long long int z=(a[n]/log10(b))+1;
//cout<<a[n]/log10(b)<<endl;
cout<<"Case "<<++d<<": "<<z<<endl;
}
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
