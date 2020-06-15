#include<bits/stdc++.h>

using namespace std;

int nprime,mark[10000002];

vector<int> v;


void seive()
{
    int n=1000009;
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
            if(i<=lim)
            {
                for(j=i*i; j<=n; j= j+(i*2))
                {
                    mark[j]=1;
                }
            }
        }


    }
}

int main()

{
    int i,j,k,l,p,c,t;

    seive();

    while(cin>>l && l!=0)
    {

        c=0;
        k=l;

        for(i=0; v[i]<sqrt(l); i++)
        {
            if(l%v[i]==0)
            {
                while(l%v[i]==0)
                {
                    l=l/v[i];
                }
                c++;
            }

        }
        if(l>1)
        {
            c++;
        }

        printf("%d : %d\n",k,c);

    }

    return 0;
}

