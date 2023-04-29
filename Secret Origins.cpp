/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
string dec_bin(int n)
{
    int i = 0;
    string result="";
    while (n > 0)
    {
        result =result+to_string(n%2);
        n = n / 2;
        i++;
    }
    return result;
}
int main()
{
    optimize();
    long long int t,i,n,d=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        std::string s=dec_bin(n);
        cout<<s<<endl;
        next_permutation(s.begin(),s.end());
        //cout<<s<<endl;
        cout<<"Case "<<++d<<": "<< stol(s,nullptr,2)<<endl;
    }
}
/// ALHAMDULILLAH




