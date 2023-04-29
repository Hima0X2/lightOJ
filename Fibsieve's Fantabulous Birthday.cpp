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
     long long int t,i,n,s,d=0;
     cin>>t;
     while(t--){
cin>>s;
long long int p=sqrt(s);
cout<<"Case "<<(++d)<<": ";
if(p*p==s){
     if(s%2==0){
cout<<p<<" "<<1<<endl;
     }
     else{
        cout<<1<<" "<<p<<endl;
     }
}
else{
     p++;
     long long int z=p*p-p+1;
     if(p*p%2==1){
          if(s>z){
               cout<<p-abs(z-s)<<" "<<p<<endl;
          }
          else{
               cout<<p<<" "<<p-abs(z-s)<<endl;
          }
     }
     else{
          if(s>z){
                cout<<p<<" "<<p-abs(z-s)<<endl;
          }
          else{
               cout<<p-abs(z-s)<<" "<<p<<endl;
          }
     }
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




