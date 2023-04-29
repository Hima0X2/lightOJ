/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mod = 1e9+7;
long long int pw(long long int b,long long int p,long long int mod){
     if(p==0) return 1;
     long long int k=pw(b,p/2,mod);
     if(p&1) return (b*k*k)%mod;
     else{
          return ((k*k))%mod;
     }
}
//time complexity= log(P)

int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
     cin>>n;
     cout<<pw(5,(n/2)+n%2,mod)*pw(4,n/2,mod)<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH



