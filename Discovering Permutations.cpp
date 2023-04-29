/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx = 1e7+123;
long long int a[mx];
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,k,d=0;
     cin>>t;
     while(t--){
          cin>>n>>k;
          string s="";
          for(i=0;i<n;i++){
               s=s+char(i+'A');
          }
          string m=s;
          cout<<"Case "<<++d<<":\n";
        while(k--){
               cout<<s<<endl;
               next_permutation(s.begin(),s.end());
               if(s==m){
                    break;
               }
        }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
