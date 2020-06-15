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

int rev(int x)
{
    int i,j=0,k,l;
    k=x;

    while(k!=0)
    {
        l=k%10;
        j=(j*10)+l;
        k/=10;
    }
    return j;
}

int main()

{
    //freopen("output.txt", "w", stdout);
    int i,j,k,l,p,c,t;

    seive();

    while(cin>>l )
    {

        if(mark[l]!=0)
        {
            printf("%d is not prime.\n",l);
        }
        else if(mark[l]==0)
        {
            k=rev(l);

            if( mark[k]==0 && k!=l)
            {

                printf("%d is emirp.\n",l);
            }
            else
            {
                printf("%d is prime.\n",l);
            }
        }

    }

    return 0;
}
