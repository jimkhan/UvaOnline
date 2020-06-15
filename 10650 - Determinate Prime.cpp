#include<bits/stdc++.h>

using namespace std;

int nprime,mark[100000002];

vector<int> v;


void seive()
{
    int n=10000009;
    int i,j,lim=sqrt(n*1.)+2;

    mark[1]=1;

    for(i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }

    v.push_back(2);

    for(i=3; i<=n; i+=2)
    {
        if(mark[i]==0)
        {
            v.push_back(i);
        }
        if(i<=lim)
        {
            for(j=i*i; j<=n; j= j+(i*2))
            {
                mark[j]=1;
            }
        }

    }
}

int main()

{
    //freopen("output.txt","w",stdout);
    int i,j,k,l,p,c,u,t;

    seive();

    while(cin>>l>>u)
    {
        if(l==0 && u==0)
        {
            break;
        }
        if(l>u)
        {
            swap(l,u);
        }
        int fl=0,ff=0,x=0,y,z=0;
        for(i=0; v[i+2]<=u; i++)
        {

            if(v[i]<l)
            {
                continue;
            }
            while(v[i+2]-v[i+1]==v[i+1]-v[i])
            {

                i+=2;
                while(v[i+1]-v[i]==v[i]-v[i-1])
                {
                    i++;
                }

                if(v[x]>=l && v[y]<=u)
                {
                    for(i=x; i<=y; i++)
                    {
                        printf("%d ",v[i]);
                    }
                    printf("\n");
                }

            }


        }

    }


}

return 0;
}
