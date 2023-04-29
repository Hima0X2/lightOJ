/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx=1e8+123;
bitset<mx>is_prime;
vector<long long int>prime;

void Prime(long long int lim){
    lim+=10;
    for(long long int i=3; i<=lim; i+=2) {
          is_prime[i]=1;
    }
    long long int sq=sqrt(lim);
    for(long long int i=3; i<=sq; i+=2){
        if(is_prime[i]){
            for(long long int j=i*i; j<=lim; j+=(i+i)){
          is_prime[j]=0;
            }
        }
    }
    is_prime[2]=1;
    prime.push_back(2);
    for(long long int i=3; i<=lim; i+=2){
        if(is_prime[i]) {
               prime.push_back(i);
        }
    }
}
int NOD(long long int n){
int r=1,c;
for(auto p:prime){
          if ( 1LL * p * p > n ){
                    break;
          }
     if(n%p==0){
          c=1;
          while(n%p==0){
               n=n/p;
               c++;
          }
           r=r*c;
     }
}
if(n>1){
     r=r*2;
}
return r;
}
int main()
{
     optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n;
    long long int lim = 1e12,d=0;
 
    Prime(lim);
     cin>>t;
     while(t--){
cin>>n;
cout<<"Case "<<++d<<": "<<NOD(n)-1<<endl;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




