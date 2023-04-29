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
bool vis[mx];
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,d=0,j,p,l;
    cin>>t;
    while(t--)
    {
        bool ok=false;
        cin>>p>>l;
        long long int x=p-l;
        vector<long long int> ans;
        for(i=1; i*i<=x; i++)
        {
            if(x%i==0){
               ans.push_back(i);
             if((x/i)!=i){
                ans.push_back(x/i);
            }
            }
        }
        sort(ans.begin(),ans.end());
        if(l*2>=p)
        {
            cout<<"Case "<<++d<<": impossible"<<endl;
        }
        else
        {
            cout<<"Case "<<++d<<": ";
            for(i=0; i<ans.size(); i++)
            {
                 if(ans[i]>l){
                cout<<ans[i]<<" ";
                 }
            }
            cout<<endl;
        }
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




