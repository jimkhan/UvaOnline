#include<bits/stdc++.h>

using namespace std;

int nprime,mark[100000002];
int dprime[1000009];

//vector<int> v;


void seive()
{
    int n=10000009;
    int i,j,lim=sqrt(n*1.)+2;

    mark[0]=mark[1]=1;

    for(i=4; i<=n; i+=2)
    {
        mark[i]=1;
    }

    //v.push_back(2);

    for(i=3; i<=n; i+=2)
    {
        if(mark[i]==0)
        {
            //v.push_back(i);
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

int sumdgt(int n)
{
    int m,p=0;

    while(n!=0)
    {
        m=n%10;
        n/=10;
        p+=m;
    }
    return p;
}

int main()

{
    int i,j,k,l,r,p,c,t;

    //freopen("out.txt","w",stdout);

    seive();
    int co=0;
    for(i=0; i<=1000000; i++)
    {
        if(mark[i]==0 && mark[sumdgt(i)]==0)
        {
            co++;
        }
        dprime[i]=co;
    }

    while(scanf("%d",&t)==1 &&t)
    {

        while(t--)
        {
            scanf("%d %d",&l,&r);

            printf("%d\n",dprime[r]-dprime[l-1]);
        }

    }

    return 0;
}

