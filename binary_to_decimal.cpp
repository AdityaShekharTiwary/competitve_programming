#include<cstdio>
#include<queue>
#include<algorithm>
#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
#define N 32200
#define INF 0xfffffff
int Head[N], cnt, Max, Index, vis[N], d[N];
struct node
{
    int v, L, next;
}e[N*2];

void Add(int u, int v, int L)
{
    e[cnt].L = L;
    e[cnt].v = v;
    e[cnt].next = Head[u];
    Head[u] = cnt++;
}
void bfs(int u)
{
    memset(vis, 0, sizeof(vis));
    queue<int>Q;
    int p, q;
    d[u]=0;
    vis[u]=1;
    Q.push(u);
    while(Q.size())
    {
        p=Q.front();
        Q.pop();
        for(int i=Head[p]; i!=-1; i=e[i].next)
        {
            q=e[i].v;
            if(!vis[q])
            {
                vis[q]=1;
                d[q] = d[p] + e[i].L;
                Q.push(q);
                if(Max<d[q])
                {
                    Max = d[q];
                    Index = q;
                }
            }
        }
    }
}
int main()
{
    int T, n, t=1, a, b, c;
    cin>>T;
    while(T--)
    {
        memset(Head, -1, sizeof(Head));
        memset(d, 0, sizeof(d));
        cnt = 0;
       cin>>n,b;
        for(int i=1; i<n; i++)
        {

            Add(a+1, b+1, c);
            Add(b+1, a+1, c);
        }
        Max = 0; Index = -1;
        bfs(1);
        bfs(Index);
        printf("Case %d: %d\n", t++, Max);
    }
    return 0;
}
