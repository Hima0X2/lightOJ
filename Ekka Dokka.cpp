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
long long int a[mx];

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,m,p,d=0;
     cin>>t;
     while(t--){
               m=0,n=0;
cin>>n;
     if(n%2==0){
          m=2;
          p=n/2;
          while(p%2==0){
           m=m*2;
           p=p/2;
          }
     }
     if(m==0||n==0){
           cout<<"Case "<<++d<<": Impossible\n";
     }
     else{
     cout<<"Case "<<++d<<": "<<p<<" "<<m<<endl;
     }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




