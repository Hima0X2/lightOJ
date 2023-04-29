/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 5e6+5;
unsigned long long phi[mx];

int main()
{
     optimize();
     int lim=5e6;
    int t,i,n,a,b,j,sum=0;
    for(i=1;i<=lim;i++){
     phi[i]=i;
}
for(i=2;i<=lim;i++){
    if(phi[i]==i){
     for(j=i;j<=lim;j=j+i){
          phi[j]*=i-1;
          phi[j]=phi[j]/i;
     }
    }
}
for ( int i = 2; i <= lim; i++ ) {
        phi[i] = phi[i] * phi[i];
        phi[i] += phi[i-1];
    }
     cin>>t;
     long long int d=0;
     while(t--){
cin>>a>>b;
cout << "Case " <<++d << ": " << phi[b] - phi[a-1] << endl;
     }
}
/// ALHAMDULILLAH




