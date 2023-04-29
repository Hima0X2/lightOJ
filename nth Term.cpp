/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b){
         return a*(b/__gcd(a,b));
    }
const long long int mx = 1e8+123;
long long int f[mx];
long long int hi(long long int n,long long int a,long long int b,long long int c){
     if(n<=2){
          return 0;
     }
     else{
          return (a*hi(n-1,a,b,c)+b*hi(n-3,a,b,c)+c)%10007;
     }
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,d=0,a,b,c,p=10007;
     cin>>t;
     while(t--){
cin>>n>>a>>b>>c;
f[3]=c;
for(i=4;i<=n;i++){
     a[i]=(a*f[n-1]+b*f[n-3]+c)%p;
}
cout<<"Case "<<++d<<": "<<a[i]%p<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
