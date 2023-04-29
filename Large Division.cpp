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
     long long int t,i,n,b,d=0;
     string a;
     cin>>t;
     while(t--){
               bool ok=true;
               long long int sum=0;
cin>>a>>b;
i=0;
if(a[0]=='-'){
     i=1;
}
for(;i<a.size();i++){
sum=sum*10+(a[i]-'0');
sum=sum%b;
}
//cout<<sum<<endl;//101 101
if(sum==0){
     cout<<"Case "<<++d<<": divisible\n";
}
else{
      cout<<"Case "<<++d<<": not divisible\n";
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




