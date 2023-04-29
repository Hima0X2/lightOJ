#include<bits/stdc++.h>
using namespace std;

const int maxn = 30;

int dx[]={+1,-1,+0,-0};
int dy[]={+0,-0,+1,-1};

char str[maxn][maxn];
bool vis[maxn][maxn];
int w,h,cnt;

bool valid(int x,int y)
{
    if(x>=0 && x<h && y>=0 && y<w && str[x][y]!='#' && !vis[x][y]) return true;
    return false;
}

void dfs(int i,int j)
{
    vis[i][j]=1;
    cnt++;
    for(int k=0;k<4;k++){
        int x=i+dx[k];
        int y=j+dy[k];
        if(valid(x,y)){
            dfs(x,y);
        }
    }
}

int main()
{
    int t,tc=1;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&w,&h);
        for(int i=0;i<h;i++){
            scanf("%s",str[i]);
        }
        memset(vis,0,sizeof(vis));
        cnt = 0;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(str[i][j]=='@'){
                    dfs(i,j);
                    goto be;
                }
            }
        }
        be:
        printf("Case %d: %d\n",tc++,cnt);
    }
    return 0;
}
