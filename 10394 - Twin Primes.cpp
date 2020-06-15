#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

int nprime,mark[30000002];

 vector<ll> v;
 vector<ll> pr;



void seive(ll n)
{
    ll i,j,t,r=0,lim=sqrt(n*1.)+2;

    mark[1]=1;
    mark[0]=1;

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
            if(mark[i]==0 && mark[i-2]==0)
            {
                pr.push_back(i-2);
            }
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
    ll i,j,k,l,p,c,t,n=20000009;

    seive(n);

    while(cin>>l)
    {
       // printf("ll%d\n",pr.size());
        l=l-1;
        printf("(%lld, %lld)\n",pr[l],pr[l]+2);

    }

    return 0;
}
