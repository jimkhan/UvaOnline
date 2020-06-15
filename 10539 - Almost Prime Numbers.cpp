#include<bits/stdc++.h>

#define pb push_back
#define ll long long

using namespace std;

int nprime,mark[10000002];

vector<int> v;


void sieve()
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
    ll i,j,k,l,r,n,m,t;

    sieve();

    freopen("out.txt","w",stdout);

    while(cin>>t)
    {
        while(t--)
        {
            scanf("%lld %lld",&l,&r);

            if(l==1)
            {
                l++;
            }
            ll ans=0;

            for(i=l; i<=r; i++)
            {
                if(mark[i]==0)
                {
                    ll por=2;
                    while(pow(i,por)<=r)
                    {
                        por++;
                        ans++;
                    }
                    break;
                }

            }

            printf("%lld\n",ans);
        }

    }



}
