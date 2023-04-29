/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 2e64;
long long int pw(long long int b,long long int p){
     if(p==0) return 1;
     long long int k=pw(b,p/2)%mx;
     if(p&1) return (b*k*k)%mx;
     else{
          return ((k*k))%mx;
     }
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,d=0,p,q,a,b;
     cin>>t;
     while(t--){
cin>>p>>q>>n;
long long int x=sqrt(p*p-4*q);
a=(p+x)/2;
b=(p-x)/2;
cout<<"Case "<<++d<<": "<<(pw(a%mx,n%mx)+pw(b%mx,n%mx))%mx<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




