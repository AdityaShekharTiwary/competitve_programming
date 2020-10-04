#include<bits/stdc++.h>
#include<iostream>
#define vi vector<int>
#define pb push_back
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define REP(i,n) FOR(i,0,n)
using namespace std;

vi ar[10001];
int vis[10001];

int maxD,maxNode;

void dfs(int node,int d)
{
    vis[node]=1;
    if(d>maxD)
    {
        maxD = d;
        maxNode=node;
    }

    for(int child : ar[node])
        if(vis[child==0])
        dfs(child , d+1);

};

int main()
{
    int n,a,b;
    cin>>n;
    REP(i,n-1) cin>>a>>b , ar[b].pb(a) ,ar[a].pb(b);

    maxD = -1;
    dfs(1 , 0);

    REP(i , n) vis[i]=0;

    maxD=-1;
    dfs(maxNode,0);

    cout << maxD;

return 0;
};
