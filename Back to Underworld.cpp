/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
const int mx = 2e4+123;
vector<int> adj[mx];
bool vis[mx],avl[mx];
int c,cnt,cnt1;
void dfs(int u,int col)
{
    vis[u]=1;
    if(col==1)cnt1++;
    else cnt++;
    int temp;
    if(col==1) temp=2;
    else temp=1;
    for(auto v: adj[u])
    {
        if(vis[v]==0)
        {
            dfs(v,temp);
        }
    }
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
  int t,i,n,m,u,v,j;
    cin>>t;
    for(i=1;i<=t;i++){
        for ( j = 0; j <= mx; j++ ) {
            adj[j].clear();
            avl[j] = 0;
            vis[j] = 0;
        }
        cin>>n;
        for ( j = 1; j <= n; j++ ) {
            int u, v;
            cin >> u >> v;
              adj[u].push_back(v);
     adj[v].push_back(u);
     avl[u]=1;
     avl[v]=1;
        }
    int ans=0;
     for (j = 1; j <= 2e4; j++ ) {
            if ( avl[j]==1&&vis[j] == 0 ) {
                cnt = 0, cnt1 = 0;
                dfs ( j, 1 );
                ans += max ( cnt1, cnt );
            }
        }
    cout<<"Case "<<i<<": "<<ans<<endl;
}

//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
