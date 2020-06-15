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
    v.push_back(1);
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
    int i,j,k,l,p,c,t,n;

    seive();

    while(cin>>n>>l)
    {

        i=1;
        c=0;
        while(v[i]<=n)
        {
            c++;
            i++;
        }
        if(c%2==0)
        {
            l=l*2;
        }
        else
        {
            l=l*2-1;
        }
        c/=2;


        for(i=c;i<c+l;i++)
        {

            printf("%d",v[i]);
            if(i<c+l)
            {
                printf(" ");
            }
        }
        cout<<"\n";

    }

    return 0;
}

