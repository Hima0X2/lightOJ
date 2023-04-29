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
const long long int mx = 1e7+123;
long long int a[mx];

int main()
{
    optimize();
    long long int t,i,n,a,b,l,c,d=0;
    cin>>t;
    while(t--)
    {
        long long int x;
        bool ok=false;
        cin>>a>>b>>l;
        long long int p=lcm(a,b);
        for(i=1; i<=1e6; i++)
        {
            long long int z=lcm(p,i);
            if(z==l)
            {
                ok=true;
                x=i;
                break;
            }
            if(z>l)
            {
                break;
            }
        }
        if(ok)
        {
            cout<<"Case "<<++d<<": "<<x<<endl;
        }
        else
        {
            cout<<"Case "<<++d<<": impossible\n";
        }
    }
}
/// ALHAMDULILLAH




