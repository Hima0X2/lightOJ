/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n,j,d=0;
    cin>>t;
    while(t--)
    {
        long long int c=0;
        string a,b;
        cin>>a>>b;
        long long int p=b.size();
        for(i=0; i<=a.size()-p; i++)
        {
            string x=a.substr(i,p);
            if(x==b)
            {
                c++;
            }
        }
        cout<<"Case "<<++d<<": "<<c<<endl;
        c=0;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




