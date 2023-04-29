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
     long long int t,n,m,b;
     cin>>t;
     while(t--){
               int i;
          long long int sum=0;
               vector<long long int> v;
cin>>n>>m;
for(i=0;i<n;i++){
     cin>>a[i];
}
sort(a,a+n);
for(i=0;i<m;i++){
     cin>>b;
     v.push_back(b);
}
sort(v.begin(),v.end());
reverse(v.begin(),v.end());
for(i=n-1;i>=0;i--){
     if(a[i]>v[0]){
          continue;
     }
     else{
          break;
     }
}
long long int k=i+1;
//cout<<min(k,m)<<endl;
for(i=0;i<min(k,m);i++){
          sum=sum+v[i];
sum=sum-a[i];
}
cout<<sum<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
