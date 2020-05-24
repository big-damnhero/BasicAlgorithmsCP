#include <bits/stdc++.h>
#define MAX 100010
#define pb push_back
using namespace std;

int main()
{
    int n,i,a,b;
    cin>>n;
    vector <int> v[MAX];
    for(i=0;i<n-1;i++)
    {
        cin>>a>>b;
        v[a].pb(b);
        v[b].pb(a);
    }
    queue <int> q;
    bool vis[MAX];
    int l[MAX];
    memset(vis,false,sizeof(vis));
    memchr(l,0,sizeof(l));
    q.push(1);
    l[1]=0;
    vis[1]=true;
    while(!q.empty())
    {

        int temp=q.front();
        q.pop();
        for(i=0;i<v[temp].size();i++)
        {
            if(!vis[v[temp][i]])
            {
                q.push(v[temp][i]);
                vis[v[temp][i]]=true;
                l[v[temp][i]]=1+l[temp];
            }
        }


    }
    return 0;
}
