#include<bits/stdc++.h>

using namespace std;
#define MAX 46400

typedef long long ll;

ll nprime;

bool mark[3000000];

vector<ll> v;
vector<ll> re;


void seive()
{
    ll n=1000009;
    ll i,j,lim=sqrt(n*1.)+2;

    mark[1]=1;

    for(i=4; i<=n; i+=2)
    {
        mark[i]=true;
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
                mark[j]=true;
            }
        }

    }
}

int main()

{

    ///freopen("output.txt", "w", stdout);

    ll i,j,k,l,p,c,flag,t,x;

    seive();

    while(cin>>l && l!=0)
    {

        flag=0;
        k=l;
        if(l<0)
        {
            l=-1*l;
            if(l==1)
            {
                printf("-1 = -1 x \n");
                continue;
            }
            re.push_back(-1);
        }

        c=l;

        for(i=0; v[i]<=sqrt(c); i++)
        {
            if(l%v[i]==0)
            {
                while(l%v[i]==0)
                {
                    l=l/v[i];
                    re.push_back(v[i]);

                }
            }
        }

        if(l!=0)
        {
            re.push_back(l);
        }

        vector<ll> :: iterator it;
        p=re.size();

        printf("%lld = ",k);

        for(it=re.begin(),i=1; it!=re.end(); it++,i++)
        {

            if(*it==1)
            {
                continue;
            }
            if(i>1)
            {
                printf(" x ");
            }
            printf("%lld",*it);

        }
        cout<<endl;
        re.clear();

    }

    return 0;
}

