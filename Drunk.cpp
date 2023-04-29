/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 1e5+123;
bool vis[mx];
 bool ok;
vector<int> adj[mx];
void dfs(int n)
{
    vis[n]=1;
    for(auto u:adj[n])
    {
        if(ok==true){
            return;
        }
        if(vis[u]==0)
        {
            dfs(u);
        }
        else if(vis[u]==1){
               ok=true;
          return;
        }
    }
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
     long long int t,i,n,d=0;
     cin>>t;
     while(t--){
cin>>n;
for (i=0;i<10010;i++){
            adj[i].clear();
            vis[i]=0;
        }
        int col=0;
string a,b;
map<string, int> mp;
for(i=0;i<n;i++){
     cin>>a>>b;
     if(mp.find(a)==mp.end()){
          mp[a]=col++;
     }
      if(mp.find(b)==mp.end()){
          mp[b]=col++;
     }
     adj[mp[a]].push_back(mp[b]);
}
 ok=false;
 for(i=0;i<col;i++){
if(vis[i]==0){
     dfs(i);
}
}
  if(ok)
        {
            cout<<"Case "<<++d<<": Yes"<<endl;
        }
        else
        {
            cout<<"Case "<<++d<<": No"<<endl;
        }
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




