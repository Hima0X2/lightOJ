/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
int main()
{
long long int fact[21];
    long long int k=1;
      fact[0]=1;
     for(int i=1;i<=20;i++){
          fact[i]=k*i;
          k=fact[i];
          //cout<<fact[i]<<endl;
     }
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,d=0;
     cin>>t;
     while(t--){
cin>>n;
vector<int> ans;
for(i=20;i>=0;i--){
          if(fact[i]<=n){
           n=n-fact[i];
           ans.push_back(i);
          }
}
//cout<<ans.size()<<endl;
if(n==0){
     cout<<"Case "<<++d<<": ";
     for(i=ans.size()-1;i>0;i--){
           cout<<ans[i]<<"!+";
     }
     cout<<ans[0]<<"!\n";
}
else{
   cout<<"Case "<<++d<<": impossible"<<endl;
}
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH