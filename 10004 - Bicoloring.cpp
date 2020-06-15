#include<bits/stdc++.h>

using namespace std;


vector <int> v[10009];

int BFS(int n)
{
    int si,i,j,k,d,fl=0,l=0;
    int vis[10009]={0};
    int color[10009]={0};
    queue<int> Q;
    Q.push(n);
    color[n]=1;

    while(!Q.empty())
    {
        k=Q.front();
        Q.pop();
        vis[k]=1;
        //int d=color[k]==1 ? 2:1;
        if(color[k]==1)
        {
            d=2;
        }
        else
        {
            d=1;
        }

        si=v[k].size();

        for(i=0; i<si; i++)
        {
            j=v[k][i];

            if(color[j]==color[k])
            {
                return 0;
            }
            if(vis[j]==0)
            {
                Q.push(j);
                color[j]=d;
                vis[j]=1;

            }
        }
    }

    return 1;

}

int main()

{
    int i,j,k,e,V,n,m,fl;
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);

    while(cin>>V)
    {
        if(V==0)
        {
            break;
        }
        cin>>e;


        for(i=0; i<e; i++)
        {
            cin>>n>>m;
            v[n].push_back(m);
            v[m].push_back(n);
        }
        fl=BFS(0);
        if(fl==0)
        {
            printf("NOT BICOLORABLE.\n");
        }
        if(fl==1)
        {
            printf("BICOLORABLE.\n");
        }
        for(i=0; i<V; i++)
        {
            v[i].clear();
        }
    }
}
