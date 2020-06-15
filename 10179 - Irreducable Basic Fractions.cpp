#include<bits/stdc++.h>

using namespace std;


int main()

{
    long long i,j,k,l,n,m,t;

    while(cin>>n &&  n)
    {
        l=1;
        for(i=sqrt(n);i<n;i++)
        {
            k=__gcd(n,i);
            // printf("k = %lld\n",k);

            if(k==1)
            {
                l++;
            }

        }
        //l=__gcd(0,12);
        printf("%lld\n",l);
    }
}
