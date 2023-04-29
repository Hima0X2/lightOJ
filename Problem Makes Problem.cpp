/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
long long int lcm(long long int a,long long b)
{
    return a*(b/__gcd(a,b));
}
const long long int mx = 1000000007;
long long int fa[2000002];
void fact()
{
    long long int f=1,i;
    fa[0]=1;
    for(i=1;i<=2000002;i++)
    {
      fa[i]=(i*fa[i-1])%mx;
      //cout<<fa[i]<<endl;
    }
}
int main()
{
    optimize();
    fact();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,k,d=0;
    cin>>t;
    while(t--)
    {
        long long int f=1,x;
        cout<<"Case "<<++d<<": ";
        cin>>n>>k;
        cout<<(((fa[n+k-1]/(fa[k-1])%mx))*(1LL/f[n]))%mx<<endl;
        cout<<(fa[n+k-1]/(fa[k-1]*fa[n])%mx)%mx<<endl;
        cout<<6*0.5<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




