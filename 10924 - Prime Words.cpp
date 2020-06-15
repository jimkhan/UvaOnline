#include<bits/stdc++.h>

using namespace std;

int nprime,mark[100000002];

 vector<int> v;


void seive()
{
    int n=10000009;
    int i,j,lim=sqrt(n*1.)+2;

    mark[1]=0;

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

    //freopen("output.txt", "w", stdout);
    int i,j,k,l,p,c,t;

    seive();

    char a[50];

    while(gets(a))
    {
        l=strlen(a);

        int b[55]={0};

        for(i=0;i<l;i++)
        {
            if(a[i]>=97 && a[i]<=122)
            {
                b[i+1]=a[i]-96;
            }
            else if(a[i]>=65 && a[i]<=92)
            {
                b[i+1]=a[i]-38;
            }

        }
        c=0;

        for(i=1;i<=52;i++)
        {
            c+=b[i];
        }

        if(mark[c]==0)
        {
            printf("It is a prime word.\n");
        }
        else
        {
            printf("It is not a prime word.\n");
        }


    }

    return 0;
}
