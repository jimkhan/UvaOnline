#include<bits/stdc++.h>

using namespace std;

int main()

{
    long long int i,j,k,t,n,m,l,x,y;

    while(cin>>n>>m)
    {
        k=n;
        y=0;

        while(1)
        {
            x=n%m;
            n=n/m;
            y=y+n;
            n=n+x;
            if(n<m)
            {
                break;
            }


        }
        printf("%lld\n",k+y);
    }

    return 0;
}
