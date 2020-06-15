#include<bits/stdc++.h>

using namespace std;

#define MAX 1000001

vector<int>* sieve()
{
    int i,j;
    bool isP[MAX];

    for(i=0; i<MAX; i++)
    {
        isP[i]=true;
    }

    for(i=2; i*i<MAX; i++)
    {
        if(isP[i])
        {
            for(j=i*i; j<MAX; j+=i)
            {
                isP[j]=false;
            }
        }
    }

    vector<int>* prime = new vector<int>();

    prime->push_back(2);

    for(i=3; i<MAX; i+=2)
    {
        if(isP[i])
        {
            prime->push_back(i);
        }
    }

    return prime;

}

void rengeFind(long long l, long long r, vector<int>* & prime)
{
    bool isP[r-l+1];
    long long i,j,len=r-l,base,curr;

    for(i=0; i<=len; i++)
    {
        isP[i]=true;
    }

    for(i=0; prime->at(i)*(long long)prime->at(i)<=r; i++)
    {
        curr=prime->at(i);
        base=((l/(curr))*curr);

        if(base<l)
        {
            base+=curr;
        }
        for(j=base; j<=r; j=j+curr)
        {
            isP[j-l]=false;
        }
        if(base==curr)
        {
            isP[base-l]=true;
        }
    }

    long long  q=2147483649,k;
    int p=-99999;
    long long a=0,b=0,c=0,d=0,cou=0,flag=0;

    for(i=0; i<len; i++)
    {
        if(l==1 && i==0)
        {
            continue;
        }
        if(isP[i]==true)
        {
            k=i;
            cou=0;
            while(1)
            {
                k++;
                cou++;

                if(isP[k]==true || k==len )
                {
                    break;
                }
            }
            if(isP[k]==false)
            {
                i=k-1;
                continue;
            }
            if(isP[i]==true && isP[k]==true)
            {
                flag=1;

            }

            if(cou<q)
            {
                q=cou;
                a=i+l;
                b=k+l;
            }
            if(cou>p)
            {
                p=cou;
                c=i+l;
                d=k+l;
            }
            i=k-1;
        }
    }
    if(flag==1)
    {
        printf("%lld,%lld are closest, %lld,%lld are most distant.\n",a,b,c,d);
    }
    else
    {
        printf("There are no adjacent primes.\n");
    }
}

int main()

{
    //freopen("output.txt", "w", stdout);
    vector<int>* prime = sieve();
    long long t,l,r;



    while(cin>>l>>r)
    {
        rengeFind(l,r,prime);

    }

}


