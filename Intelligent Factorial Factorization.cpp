/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const long long int mx=1e8+123;
bitset<mx>is_prime;
vector<long long int>prime;
long long int fac[mx];
int main()
{
    int n,i,d=0,t;
    cin>>t;
    while(t--){
    cin >> n;
    int arr[n+5] = {};
    for(int i=2; i<=n; i++) {
        int num = i;
        for(int j=2; j*j<=i; j++) {
            int cur = 0;
            while(num%j == 0) {
                cur++;
                num/=j;
            }
            arr[j] =arr[j]+ cur;
        }
        if(num>1) arr[num]++;
    }
//    for(i=1;i<=n;i++){
//     cout<<arr[i]<<" ";
//    }
//    cout<<endl;
    cout << "Case " << ++d << ": "<< n << " = ";
    bool flag = 0;
    for(int i=2; i<=n; i++) {
        if(arr[i]) {
            if(flag) {
                cout << " * ";
            }
            flag = 1;
            cout << i << " (" << arr[i] << ")";
        }
    }
    cout << endl;
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
