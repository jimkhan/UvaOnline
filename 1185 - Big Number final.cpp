#include<bits/stdc++.h>

using namespace std;

int main()

{
    int i,j,k,t,n,l;
    double ans;

    cin>>t;

    while(t--)
    {
        cin>>n;
        ans=0;

        if(n==1)
        {
            ans=1;
        }
        if(n>1)
        {
            for(i=2;i<=n;i++)
            {
                ans=ans+log10(i);
            }
            n=floor(ans)+1;
        }

        printf("%d\n",n);
    }
}
