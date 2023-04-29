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
pair<long long int,long long int> a[1000];
bool comp(pair<long long int,long long int> x,pair<long long int,long long int> y)
{
    if(x.second!=y.second)
    {
        return x.second<y.second;
    }
    else
    {
        return x.first>y.first;
    }
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,j,d=0;
    for(i=1; i<=1000; i++)
    {
         a[i-1].first = i;
        for(j=i; j<=1000; j=j+i)
        {
          a[j-1].second++;
          //cout<<a[j-1].second<<endl;
        }
    }
    sort(a,a+1000,comp);
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<"Case "<<++d<<": "<<a[n-1].first<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




