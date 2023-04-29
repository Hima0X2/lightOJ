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
    long long int t,i,n,d=0;
    cin>>t;
    while(t--)
    {
        string first_month,end_month;
        char comma;
        int first_day,end_day,first_year,end_year;
        cin>>first_month>>first_day>>comma>>first_year;
        cin>>end_month>>end_day>>comma>>end_year;
        if(!(first_month=="January"||first_month=="February"))
        {
            first_year=first_year+1;
        }
        if(end_month=="January"||(end_month=="February"&&end_day<29))
        {
            end_year=end_year-1;
        }
        int Multiples_of_4 = (end_year/4- (first_year -1)/4 );
        int Multiples_of_100 = (end_year/100 -(first_year - 1 )/100 ) ;
        int Multiples_of_400 = (end_year /400 - (first_year -1 ) /400 );
        int total =Multiples_of_4  + Multiples_of_400 - Multiples_of_100;
        cout<<"Case "<<++d<<": "<<total<<endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH

